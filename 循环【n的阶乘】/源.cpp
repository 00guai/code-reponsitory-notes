#define   _CRT_SECURE_NO_WARNINGS  1

#include<stdio.h>
int main()
{
	int i = 0; int n = 0; int ret = 1;//retΪ������õ�һ����������n�Ľ׳�
	scanf("%d", &n);//����n�ĸ�ʽ
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	printf("ret = %d\n", ret);
	return 0;
}