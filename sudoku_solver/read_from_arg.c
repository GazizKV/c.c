#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int check(int argc)
{
	if (argc < 2)
	{
		printf("You are not pass the argument");
		return 1;
	}
	/*if ((*argv[0] != "\"" && *argv[10])!="\"")
	{
		printf("You are pass the argument in a wrong way");
		return 1;
	}*/
}

void printing(char **argv)
{
	for (int i=0; i < strlen(*argv[1]); i++)
	{
		putchar(argv[i]);
	}
}

int main(int argc, char* argv){
	if (check(argc)) return 0;
	printing(*argv);
	int ** sudoku;

	printf("%s", argv);
	

	return 0;
}
