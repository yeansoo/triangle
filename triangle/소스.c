#include<stdio.h>
int get_triangle(int a, int b)
{
	return a * b;
}

void main() {
	int a = 3, b = 5;
	
	printf("��a=%d,��b=%d\n�����ﰢ�� ����=%d\n",a,b, get_triangle(a, b));
}