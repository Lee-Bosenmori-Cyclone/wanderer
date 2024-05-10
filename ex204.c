#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a=0,b=0,c=0,d=0;
	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
	int e=0;
	if(a<b){
		e=a;
	}
	else{
		e=b;	
	}
	if(c<d){
		e=e+d;
	}
	else{
		e=e+c;
	}
	printf("%d",e);
	return 0;
}


