#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {	
	char a,b,c,d,e;
	scanf("%c%c%c%c%c",&a,&b,&c,&d,&e);
	if(a>118){
		a=a-26;
	}else a=a+0;
	if(b>118){
			b=b-26;
		}else b=b+0;
	if(c>118){
			c=c-26;
		}else c=c+0;
	if(d>118){
			d=d-26;
		}else d=d+0;
	if(e>118){
			e=e-26;
		}else e=e+0;
	char a1=a+4;
	char b1=b+4;
	char c1=c+4;
	char d1=d+4;
	char e1=e+4;
	printf("%c%c%c%c%c",a1,b1,c1,d1,e1);
	return 0;
}


