#include<stdio.h>
int get_triangle(int a, int b)
{
	return a * b;
}

void main() {
	int a = 3, b = 5;
	
	printf("º¯a=%d,º¯b=%d\nÁ÷°¢»ï°¢Çü ³ĞÀÌ=%d\n",a,b, get_triangle(a, b));
}