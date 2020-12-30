#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	FILE *fsudoku;
	char numbers;
	int characters;
	
	characters = 0;


	fsudoku=fopen("sudoku","r");

	if (fsudoku == 0) {
		printf("Cannot open file\n");
		exit(1);
	}

	
	while (fgetc(fsudoku) != EOF) {
		numbers = getc(fsudoku);
		if (numbers == '-') characters++;
		putchar(numbers);
	}

	fclose(fsudoku);
	printf(" Numbers of \"-\" characters = %d", characters);
	


	return 0;
}
