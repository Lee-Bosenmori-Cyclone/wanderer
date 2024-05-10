#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i=0;
	int b=0;
	int c=0;
	int d=0;
	int a=0;
	for(i=100;i<1000;i++){
		a=i%10;
		b=i%100;
		b=b/10;
		c=i/100;
		d=a*a*a+b*b*b+c*c*c;
		if(d==i){
			printf("%d\n",i);
		}
		
	}
	
	
	
	return 0;
}

