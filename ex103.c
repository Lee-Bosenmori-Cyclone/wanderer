#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float a,b,c,d;//a�ǹ���۸�,b�Ƿ�Ʒ��ֵ,c��ʹ������,d��ÿ���۾ɷ�
	scanf("%f,%f,%f,%f",&a,&b,&c,&d);
	float fei=(a-b)/c;//ÿ���۾ɷ�
	float jia=a-fei*d;//�����ֵ
	printf("%.2f,%.2f",fei,jia);
	return 0;
}
