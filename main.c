#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int seconds, min, sec;
	
	
	printf("input the second : ");
	scanf("%d", &seconds);
	
	min = (seconds - seconds%60)/60;
	sec = seconds - min*60;
	
	
	printf("the time is %d : %d", min, sec);
	

	return 0;
}
