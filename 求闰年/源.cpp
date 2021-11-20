#define   _CRT_SECURE_NO_WARNINGS  1

#include<stdio.h>
int main()
{
	int year = 0;
	scanf("%d", &year);

	//for (year = 0; year <= 2021; year++)//9章 38分
	//	判断闰年标准；
	//	1.能被4整除，但不能被100整除
	//	2.能被400整除s


	//{
	//	if((year%4==0) && (year%400!=0))
	//	{
	//		printf("%d\n", year);
	//	}
	//	else if (year%400 == 0)
	//	{
	//		printf("%d\n", year);
	//	}
	if (year % 4 == 0 && year % 100 != 0 && year % 400 == 0)
	{
			printf("闰年\n");
         }
	else 
	{
		printf("不是闰年\n");
	}
	return 0;

}