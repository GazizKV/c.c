#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	FILE * f;
	f=fopen("sudoku","r");
	char ** sudo;

	for(int i=0;i<9;i++)
		for(int j=0;j<0;j++)
		{
			fscanf(f, "%s", &sudo[i][j]);
			printf("%s", &sudo[i][j]);
		}
	for(int i=0;i<9;i++)
		for(int j=0;j<0;j++)
			printf("%s", &sudo[i][j]);
	

	


	return 0;
}
