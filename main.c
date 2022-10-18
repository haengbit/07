#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) 
{
	int i = 10;
	printf("before calling function i=%d\n", i);
	inc(i);
	printf("after calling function i=%d\n", i);
	return 0; 
}

int inc(int counter)
{
	counter++;
	return counter;
}

// before calling function i=10
// after calling function i=10


