#define   _CRT_SECURE_NO_WARNINGS  1

#include<string.h>
#include<stdio.h>
int my_strlen(char* str)//模拟实现一个strlen函数
{
	int count = 0;
	while (*str != '\0')//不看到终止符，就会一直运行
	{
		count++;
		str++;//地址从b—i—t一直推进
	}
	return count;
}
int main()
{
	char arr[] = "bit";//结果是3
	int len =  my_strlen(arr);//求字符串的长度
	printf("len = %d\n", len);
	return 0;
}