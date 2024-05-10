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
	int j=0;
	int k=1;
		
	int m=0;
	int n=0;
	int a=0;
	
	scanf("%d,%d",&m,&n);
	if(n<m){
		a=m;
		m=n;
		n=a;
	}
	if(n>9999||m<0){
		printf("error");
	}
	else{
		
	for(i=m;i<=n;i++){
			k=he(i);	
			if(k==i){
				printf("%d",k);
				break;
						
			}	
							
		}		
		for(i=k+1;i<=n;i++){
			k=he(i);	
			if(k==i){
				printf(",%d",k);
						
			}	
							
		}
			

	
	
		}	
	
	return 0;
}

