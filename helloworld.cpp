#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_a()
{
	printf("\na: hello world!\n\n");
}

void print_b()
{
	printf("\nb: hello world!\n\n");
}

int main(int argc, char* argv[])
{

	print_a();	
	print_b();	
	print_b();	

	return 0;
}
