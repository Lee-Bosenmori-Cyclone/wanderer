#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float a=0;
	scanf("%f",&a);
	if(a<=500){
		a=a;
	}
	else{
		if(a<=1000){
			a=0.9*a;
		}
		else{
			a=0.8*a;
		}
	}
	printf("%.2f",a);
	
	return 0;
}

