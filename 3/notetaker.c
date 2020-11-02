#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include "hacking.h"

void usage(char *prog_name, char *filename)
{
	printf("Usage: %s <data to add to %s>\n", prog_name, filename);
	exit(0);
}

void fatal(char *);	// function processing critical mistake
void *ec_malloc(unsigned int); // wrap for malloc() with checking mistake

int main(int argc, char *argv[])
{
	int userid, fd; // file's descriptor
	char *buffer, *datafile;

	buffer = (char *) ec_malloc(100);
	datafile = (char *) ec_malloc(20);
	strcpy(datafile, "/var/notes");

	if(argc < 2)				// if atgument nit faund,
		usage(argv[0], datafile);	// displey usage's message
						// and end proggram
	strcpy(buffer, argv[1]);	// copy to the buffer

	printf("[DEBUG] buffer		@ %p: \'%s\'\n", buffer, buffer);
	printf("[DEBUG] datafile	@ %p: \'%s\'\n", datafile, datafile);

// open the file
	fd = open(datafile, O_WRONLY|O_CREAT|O_APPEND, S_IRUSR|S_IWUSR);
	if(fd == -1)
		fatal("in function main() with open the file");
	printf("[DEBUG] file's descriptor %d\n", fd);

	userid = getuid(); // get real user's ID

// wrinting in file
	if(write(fd, &userid, 4) == -1)	//writing user's ID befor data
		fatal("in main() function when wrinting user id in file");
	write(fd, "\n", 1);

	if(write(fd, buffer, strlen(buffer)) == -1)	// writing notes in file
		fatal("in main() function when wrinting buffer id in file");
	write(fd, "\n", 1);	// ending line

// coles the file
	if(close(fd) == -1)
		fatal("in main() function when close the file");

	printf("Note saved.\n");
	free(buffer);
	free(datafile);
}

