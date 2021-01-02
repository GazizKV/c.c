#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	FILE *fsudoku;
	char *sudoku;
	int i;

	printf("16ths line");

	fsudoku=fopen("sudoku","r");

	printf("16ths line");

	if (fsudoku == 0) {
		printf("Cannot open file\n");
		exit(1);
	}

	printf("16ths line");
	i = 0;
	fgets(sudoku, 10, fsudoku);
	printf("%s", sudoku);
	printf("\n");
	fclose(fsudoku);
	


	return 0;
}
