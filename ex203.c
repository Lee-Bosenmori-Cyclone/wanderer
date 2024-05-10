#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=0;
	float m=0;
	scanf("%d",&a);
	int b=a/100;
	switch (b) {
		case 0:
			m=0.8*a;
			break;
		case 1:
			m=0.8*a;
			break;
		case 2:
			m=0.9*a-20;
			break;
	
		default:
			m=a-50;
			break;
	}
	if(m<100){
		m=100;
	}
	if(m>400){
		m=1.15*m;
	}
	printf("%.2f",m);
	return 0;
}
