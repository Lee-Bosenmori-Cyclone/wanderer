#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int he(int a){
	int b=0;
	int i=0;
	for(i=1;i<a;i++){
		if(a%i==0){
			b=b+i;
		}
	}
	
	return b;
}





int main(int argc, char *argv[]) {
	int i=0;
	int a=1;
	for(i=1;i<10;i++){
		a=a+1;
		a=a*2;
		
	}
		printf("%d",a);
	
	return 0;
}

