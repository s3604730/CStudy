#include <stdio.h>
#include <string.h>
#include <unistd.h>


int main() 
{
	char msg[] = "Hellfdsafasdfo, World!\n";
	write(1, msg, strlen(msg));

	strcpy(msg,  "Hello, World!");
	write(1, msg, strlen(msg));
	return 0;
}
