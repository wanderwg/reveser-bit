#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h> 
unsigned int reverse_bit(unsigned int value) {
	unsigned int ret = 0;
	for (int i = 0; i < 32; ++i) {
		ret += ((value >> i) & 1) << (31 - i);//ȡ��value���λ��ֵ
	}
	return ret;
}
int main(){
	unsigned int num = 0;
	printf("������һ������");
	scanf("%d", &num);
	printf("��ת�����Ϊ��%u\n", reverse_bit(num));
	system("pause");
	return 0;
}
