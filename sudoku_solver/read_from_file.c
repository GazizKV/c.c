#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	FILE *fsudoku;
	char **sudoku;
	int i;

	sudoku = (char **)calloc (100, sizeof(char*));
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
	// need to read example from the cppreference.com "fread"
	//`
	//
	//
	//
	for(i;i<10;i++)
	{
		if (fgets(*sudoku, 10, fsudoku) != NULL ) 
		{
			printf("%s\n", *sudoku);
			*sudoku++;
		}
		else
		{
			printf("can not read from file on line %d\n", i);
			exit (1);
		}
	}
	printf("32ths line\n");
	printf("\n");
	fclose(fsudoku);
	free(sudoku);
	


	return 0;
}
