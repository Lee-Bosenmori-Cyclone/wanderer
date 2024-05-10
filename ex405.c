#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float le(int n,int x){
	if(n==0){
		return 1;
	}else{
		if(n==1){
			return x;
		}else{
			return ((2*n-1)*x-le(n-1,x)-(n-1)*le(n-2,x))/n;
		}
	}
}


int main(int argc, char *argv[]) {
	int n=0;
	int x=0;
	scanf("%d,%d",&n,&x);
	if(n<=0){
		printf("error");
	}else{
		printf("%.2f",le(n,x));
	}
	
	
	
	
return 0;

}

