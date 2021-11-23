#define   _CRT_SECURE_NO_WARNINGS  1

#include<stdio.h>
int get_max(int a, int b)
{
	if (a > b)
		return a;
	if (a < b)
		return b;
}


int main()
{
	int a = 65;
	int b = 58;
	int max = get_max(a, b);
	printf("max=%d\n", max);
	return 0;
}