#include <stdlib.h>
#include <stdio.h>

int main() {
	FILE * fpointer = fopen("employees.txt", "a");

	fprintf(fpointer, "\nKelly, Customer Service");

	fclose(fpointer);

	return 0;
}
