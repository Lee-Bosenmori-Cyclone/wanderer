#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float f(float a,float b,float c){
	float a1=a;
	float a2=a;
	float i=0;
	for(i=1;i<=c;i++){
		a=a*(1+b/12);
		a2=a;
		a=a+a1;
	}
	return a2;
}
int main(int argc, char *argv[]) {
	float f(float a,float b, float c);
	float a=0;
	float b=0;
	float c=0;
	scanf("%f,%f,%f",&a,&b,&c);	
	printf("%.2f",f(a,b,c));
	return 0;
}

