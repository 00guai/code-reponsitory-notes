#define   _CRT_SECURE_NO_WARNINGS  1

#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "���������Ǵ�ɵ��";
	char arr2[] = "���������Ǵ�ɵ��";
		strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}