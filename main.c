#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int x, y;
	int plus, sub, mul, div, por;
	
	printf("input two integers : ");
	scanf("%i %i", &x, &y);
	
	
	plus = x+y;
	sub = x-y;
	mul = x*y;
	div = x/y;
	por = x%y;
	
	
	
	printf("+ result is : %d\n", plus);
	printf("- result is : %d\n", sub);
	printf("* result is : %d\n", mul);
	printf("/ result is : %d\n", div);
	printf("%% result is : %d\n", por);
	return 0;


	
	return 0;
}
