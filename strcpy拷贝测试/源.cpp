#define   _CRT_SECURE_NO_WARNINGS  1

#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "哈哈，你是大傻逼";
	char arr2[] = "哈哈，我是大傻逼";
		strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}