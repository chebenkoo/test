#include <stdio.h>


char *ptr = NULL;

void fun2();

int main(int argc, char** argv)
{
    printf("Git-Version: %s\n, %s\n:", VERSION, TAGCOMMIT);

	return 0; 
}


void fun2()
{
	printf("inside fucntion 2");
}