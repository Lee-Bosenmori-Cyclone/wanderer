#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
		int a=0;
		scanf("%d",&a);
		int b=a*a;
		int c=a/2;
		if(a<0){
			printf("%d",b);
		}
		else{
			if(a%2==0){
				printf("%d",b);
			}
			else{
				printf("%d",c);
			}
		}
	return 0;
}
