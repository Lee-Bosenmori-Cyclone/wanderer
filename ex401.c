#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int hanshu(int a){
	int b=0;
	while(a>0){
		b=b*10+a%10;
		a=a/10;
	}
	return b;
}


int main(int argc, char *argv[]) {
	int hanshu(int a);
	int a,c1,c2,i;
	scanf("%d",&a);
	for(c2=0;c2<=a;c2++){
		c1=hanshu(c2);
		if(c1==c2){
			printf("%d,",c1);
			++i;
			if(i%10==0){
				printf("\n");
				
			}
			
		}
		
	}
	
	
	return 0;
}




