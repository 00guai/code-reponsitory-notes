#define   _CRT_SECURE_NO_WARNINGS  1

#include<stdio.h>
int main()
{
	int i = 0; int n = 0; int ret = 1;//ret为随便设置的一个变量代表n的阶乘
	scanf("%d", &n);//输入n的格式
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	printf("ret = %d\n", ret);
	return 0;
}