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

int main(int argc, char *argv[]) {
	int zhishu(int a);
	int n=0;
	int m=0;
	int a=0;
	int b=0;
	scanf("%d,%d",&m,&n);
	int i=0;
	for(i=m;i<=n;i++){
		a=zhishu(i);
		b=zhishu(i+2);
		if(a==i&&b==i+2){
			printf("%d,%d\n",a,b);
		}
	}
	
return 0;

}


