#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void huan(int *a,int *b){
	int p=*a;
	*a=*b;
	*b=p;	
}
int main(int argc, char *argv[]) {
	void huan(int *a,int *b);
	int a[5];
	int *p[5];
	int i=0;
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
		
	int j=0;
	int k=0;
	for(k=0;k<5;k++){
		for(j=k+1;j<5;j++){
			if(a[k]>a[j]){
				huan(&a[k],&a[j]);
			}
		}
	}
	i=0;
	for(i=0;i<4;i++){
		printf("%d ",a[i]);
	}
	printf("%d",a[4]);

	return 0;
}

