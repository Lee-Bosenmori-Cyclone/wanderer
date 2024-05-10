#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int zhishu(int a){
	int i=0;
	int b=0;
	for(i=1;i<a;i++){
		if(a%i==0){
			b++;
		}			
	}	
	if(b==1){
		return a;
	}
	else{
		return 0;
	}
}

float fi(int n){
	if(n==1||n==2){
		return 1;
	}
	else{
		return fi(n-1)+fi(n-2);
	}
}

int main(int argc, char *argv[]) {
	
	float fi(int n);
	int i=0;
	float j=0;
	int n=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		j=j+fi(i+2)/fi(i+1);
	}
	printf("%.2f",j);
	
	
return 0;

}




