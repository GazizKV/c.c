// function display mistake and ending programm

void fatal(char *message)
{
	char error_message[100];

	strcpy(error_message, "[!!] critical error ");
	strncat(error_message, message, 83);
	perror(error_message);
	exit(-1);
}

// waraper function malloc() whith checking mistake
void *ec_malloc(unsigned int size)
{
	void *ptr;
	ptr = malloc(size);
	if(ptr == NULL)
		fatal("in function ec_malloc() with allocatingmemory");
	return ptr;
}
