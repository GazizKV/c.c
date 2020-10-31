#include<stdio.h>
#include<stdlib.h>

int main()
{
	char name[50];
	printf("What's your name?\n");
	scanf("%s", name);
	printf("\n");
	printf("Hello %s!\n", name);

	return 0;
}
