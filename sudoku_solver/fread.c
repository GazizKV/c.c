#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	FILE *fsudoku;
	char **sudoku;
	int i;

	sudoku = (char **)calloc (10, sizeof(char*));
	for(int i=0;i<10;i++)
		sudoku[i] = (char *)calloc (10, sizeof(char));
	if ( sudoku==NULL) {
		printf("Can not allocating memory\n");
		exit (1);
	}
	printf("14ths line\n");

	fsudoku=fopen("sudoku","r");

	printf("18ths line\n");

	if (fsudoku == 0) {
		printf("Cannot open file\n");
		exit(1);
	}

	printf("25ths line\n");
	i = 0;
	while (fgets(*sudoku, 11, fsudoku) != NULL) {
		printf("%s\n", *sudoku);
		*sudoku++;
	}
	if (feof(fsudoku))
		puts("End of file reached");
	printf("32ths line\n");
	printf("\n");
	fclose(fsudoku);
	free(sudoku);
	


	return 0;
}
