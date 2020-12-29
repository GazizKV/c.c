#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	FILE *fsudoku;
	fsudoku=fopen("sudoku","r");
	char ** sudoku;
	
	if (fsudoku == 0) {
		printf("Cannot open file\n");
		exit(1);
	}

	while (fgets
	/*for(int i=0;i<9;i++)
	{
		for(int j=0;j<0;j++)
		{
			fscanf(f, "%s", &sudo[i][j]);
			printf("%s", &sudo[i][j]);
		}
	}
	for(int i=0;i<9;i++)
		for(int j=0;j<0;j++)
			printf("%s\n", &sudo[i][j]);
*/	

	


	return 0;
}
