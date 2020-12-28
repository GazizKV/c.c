#include <stdio.h>
#include <stdlib.h>

int check(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("You are not pass the argument");
		return 1;
	}
	if ((argv[0]&& argv[9])!="\"")
	{
		printf("You are pass the argument in a wrong way");
		return 1;
	}
}

int main(int argc, char** argv[]){
	if (check(argc, argv)) return 0;
	int ** sudoku;

	for(int i=0;i<9;i++)
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
	

	


	return 0;
}
