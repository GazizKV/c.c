#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int check(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("You are not pass the argument");
		return 1;
	}
	if ((*argv[0] != "\"" && *argv[10])!="\"")
	{
		printf("You are pass the argument in a wrong way");
		return 1;
	}
}

void printing(char **argv)
{
	printf(strlen(argv);
	for (int i=0; i < strlen(argv); i++)
	{
		printf(*argv[i]);
	}
}

int main(int argc, char* argv[]){
	printing(argv);
	if (check(argc, argv)) return 0;
	int ** sudoku;

	printf("%s", *argv);
	

	return 0;
}
