#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {	
	char a[100];
	char b[100];
	int m=0;
	int n=0;
	int q=0;
	for(int i=0;i<100;i++){
		scanf("%c",&a[i]);	
		if(a[i]==';'){
			break;
		}
	}
	int jishu=0;
	int i=0;
	int j=1;
	for(i=99;i>=0;i--){
		if(a[i]==']'){
			for(j=1;j<100;j++){
				if(a[i-j]=='['){
					break;	
				}else{
					q=a[i-j]-48;
					n=pow(10,j-1);
					m=m+n*q;
				}
			}	
		}
	}
	int k=0;
	for(k=0;k<100;k++){
		if(a[k]=='{'){
			jishu++;
		}
	}
	if(jishu==0){
		i=0;
		for(i=0;i<m;i++){
			printf("N ");
		}		
	}else{
			
	i=0;
	j=1;
	int ci=1;
	for(i=0;i<100;i++){
		if(a[i]=='{'){
			for(j=1;j<100;j++){
				if(a[i+j]=='}'){
					break;
				}else{
					if(a[i+j]==','){
						printf(" ");
						ci++;
					}else{
						if(a[i+j]!='\n'){
							if(a[i+j]!=' '){
								printf("%c",a[i+j]);
							}		
						}		
					}
				}	
			}		
		}
	}
	i=0;
	int ge=m-ci;
	for(i=0;i<ge;i++){
		printf(" 0");
	}
	}	
	return 0; 
}

