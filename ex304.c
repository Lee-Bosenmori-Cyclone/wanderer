#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int hanshu(int a){
	int b=a*a*a*a;
	return b;
}


int main(int argc, char *argv[]) {
	
	int a=0;
	scanf("%d",&a);
	int hanshu(int a);
	if(a<=10&&a>=3){
		int b=hanshu(a);
		int c=hanshu(a+3);
		int d=hanshu(a+6);
		int e=hanshu(a+9);
		int f=hanshu(a+12);
		int g=hanshu(a+15);
		int h=0;
		h=b+c+d+e+f+g;
		printf("%d",h);
	}
	else{
		printf("error");
	}
	
	
		
	return 0;
}

