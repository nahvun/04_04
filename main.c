#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int second, hour, min, sec;
	
	printf("input the second: ");
	scanf("%d", &second);
	
	hour = second/3600;
	min = (second%3600)/60;
	sec = (second%3600)%60;
	
	printf("The time for %d second is %d : %d : %d", second, hour, min, sec);
	

	
	return 0;
}
