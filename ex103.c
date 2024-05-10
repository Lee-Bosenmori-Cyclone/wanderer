#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float a,b,c,d;//a是购买价格,b是废品价值,c是使用年限,d是每年折旧费
	scanf("%f,%f,%f,%f",&a,&b,&c,&d);
	float fei=(a-b)/c;//每年折旧费
	float jia=a-fei*d;//残余价值
	printf("%.2f,%.2f",fei,jia);
	return 0;
}
