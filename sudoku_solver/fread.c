#include <stdio.h>
#include <stdlib.h>

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

void solve_sudoku(char **sudoku) {
	int j;
	for(int i=0;i<9;i++) {
		j=0;
		for(j=0;j<11;j++) {
		putchar(sudoku[i][j]);
		}
	}
}

void freeing_memory(char **sudoku) {
	free(sudoku);
	for(int i=0;i<9;i++)
		free(*sudoku++);
	puts("Memory for char  **sudoku feeed && end the programm");
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
