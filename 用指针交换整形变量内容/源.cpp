#define   _CRT_SECURE_NO_WARNINGS  1

#include<stdio.h>
void swap(int* pa, int* pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main()
{
	int a = 5;
	int b = 25;
	swap(&a,&b);
	printf("a=%d\nb=%d\n", a, b);
	return 0;
}