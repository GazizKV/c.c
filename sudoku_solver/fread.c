#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

char** allocating_memory(FILE *fd_sudoku) {
	char **sudoku = calloc(9, sizeof(char*));
	for(int i=0;i<9;i++)
	{
		sudoku[i] = calloc(11, sizeof(char));
		printf("%ls", &i);
	}
	if ( sudoku==NULL) {
		printf("Can not allocating memory\n");
		exit (1);
	}
	printf("Memory allocating\n");
	return sudoku;
}

FILE *open_pruv_file(char *file_name) {
	FILE *fd_sudoku;
	fd_sudoku=fopen(file_name, "r");
	if (fd_sudoku == 0) {
		printf("Cannot open file\n");
		exit(1);
	}
	puts("File open by file stream name fd_sudoku\n");
	return fd_sudoku;
}

char **read_file_to_sudoku(char **sudoku, FILE *fd_sudoku) {
	int i;

	i = 0;
	while (fgets(*sudoku, 11, fd_sudoku) != NULL) {
		printf("%s", *sudoku++);
	}
	puts("\n");
	if (feof(fd_sudoku))
		puts("End of file reached");
	printf("File readed to char **sudoku\n\n");
	fclose(fd_sudoku);
	return sudoku;
}

char *get_suit_valu(int x, int y, char **sudoku) {
	char *charPointerToDigits_array = "123456789";
	int i, j;
	char *result = "-";
	char *horisontal;
	char *vertical;
	char *square;

	i=x;
	j=y;
	for(i=0;i<9;i++) {
		if((i==x && j==y)||(&sudoku[i][j]=="-"))
			continue;
		
	}
	printf("%s", result);
	return result;
	
}

void solve_sudoku(char **sudoku) {
	char *charPointerToDigit;
	int j;

	for(int i=0;i<9;i++) {
		j=0;
		for(j=0;j<11;j++) {
			//putchar(sudoku[i][j]);
			if (&sudoku[i][j] == "-")
				continue;
			charPointerToDigit = get_suit_valu(i, j, sudoku);
			sudoku[i][j] = *charPointerToDigit; 	
		}
	}
}

void freeing_memory(char **sudoku) {
	free(sudoku);
	for(int i=0;i<9;i++)
		free(*sudoku++);
	puts("Memory for char  **sudoku freed && end the programm");
}

int main(int argc, char* argv[]){
	FILE *fd_sudoku;
	char **sudoku;

	sudoku = allocating_memory(fd_sudoku);
	fd_sudoku = open_pruv_file("sudoku");
	read_file_to_sudoku(sudoku, fd_sudoku);
	solve_sudoku(sudoku);
	freeing_memory(sudoku);

	return 0;
}
