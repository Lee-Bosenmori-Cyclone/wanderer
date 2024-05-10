
#include<stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){
    int a[21]={0};
	int b[21]={0};
	int n=0;
    scanf("%d",&n);
    int i=0;
	int j=0;
	int m=0;    
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(a[i]==a[j]){
                b[i]++;					
			}
		}
	}
    for(i=0; i<n; i++){
        for(j=0, m=1; j<n; j++){
            if(b[j]==0 && a[i]<a[j]){
                m++;				
			}		
		}
        printf(i == 0 ?"%d":" %d" ,m);
    }
    
    return 0;
}


