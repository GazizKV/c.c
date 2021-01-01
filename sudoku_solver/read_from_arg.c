#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv){
	if (argc < 2) return 0;
	for (int i = 1; i <= argc; i++)
	{
		printf("%s\n", *argv);
		*argv++;
	}

	return 0;
}
