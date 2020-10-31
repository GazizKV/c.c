#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>

void usage(char *prog_name, char *filename)
{
	printf("Uasage: %s <sta to add to %s>\n", prog_name, filename);
	exit(0);
}

void fatal(char *);		// function, perform mistake
void *ec_malloc(unsigned int);	// Wrap function malloc() with approve mistake

int main(int argc, char *argv[])
{
	int fd;	// file's deskriptor
	char *buffer, *datafile;

	buffer = (char *) ec_malloc(100);
	datafile = (char *) ec_malloc(20);
	strcpy(datafile, "/tmp/notes");

	if(argc < 2)				// If atgc from CL is 0
		usage(argv[0], datafile);	// display message and exit

	strcpy(buffer, argv[1]);	// copy to buffer

	printf("[DEBAG] buffer @ %p: \'%\'\n", buffer, buffer);
	printf("[DEBAG] datafile @ %p: \'%s\'\n", datafile, datafile);

	strncat(buffer, argv[1]);	// add new line to end

// open the file
	fd = open(datafile, O_WRONLY|O_CREAT|O_APPEND, S_IRUSR|S_IWUSR);
	if(fd == -1)
		fatal("in function main() whith open the file");
// close the file
	if(close(fd) == -1)
		fatal("in function main() with close file");

printf("Notice saved. \n");
free(buffer);
free(datafile);
}

// function display message about mistake and end programm
void fatal(char *mesage)
{
	char error_meddahe[100];

	strcpy(error_message, "[!!] critical mistake");
	strncat(error_message, message, 83);
	perror(error_message);
	exit(-1);
}

// function wrap for malloc() with approving mistake
void *ec_malloc(unsigned int size)
{
	void *ptr;
	ptr = malloc(size);
	if(ptr == NULL)
		fatal("in function ec_malloc() with allocatig memory");
	return ptr;
}
