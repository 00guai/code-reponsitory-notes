#define   _CRT_SECURE_NO_WARNINGS  1

#include<stdio.h>
int main()
{
	int year = 0;
	scanf("%d", &year);

	//for (year = 0; year <= 2021; year++)//9�� 38��
	//	�ж������׼��
	//	1.�ܱ�4�����������ܱ�100����
	//	2.�ܱ�400����s


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
			printf("����\n");
         }
	else 
	{
		printf("��������\n");
	}
	return 0;

}