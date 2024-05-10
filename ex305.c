#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	int a,b,c,d,e,f,g,h;
	int i=0;
	scanf("%d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h);
	if(a%2==0){
		i=i+a;
	}
	
	if(b%2==0){
		i=i+b;
	}
	
	if(c%2==0){
		i=i+c;
	}
	
	if(d%2==0){
		i=i+d;
	}
	
	if(e%2==0){
		i=i+e;
	}
	
	if(f%2==0){
		i=i+f;
	}
	
	if(g%2==0){
		i=i+g;
	}
	
	if(h%2==0){
		i=i+h;
	}
	
	printf("%d",i);	
	
	
	
	
return 0;

}

