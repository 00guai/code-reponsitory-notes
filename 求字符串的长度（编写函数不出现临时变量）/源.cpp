#define   _CRT_SECURE_NO_WARNINGS  1

#include<string.h>
#include<stdio.h>
int my_strlen(char* str)//ģ��ʵ��һ��strlen����
{
	int count = 0;
	while (*str != '\0')//��������ֹ�����ͻ�һֱ����
	{
		count++;
		str++;//��ַ��b��i��tһֱ�ƽ�
	}
	return count;
}
int main()
{
	char arr[] = "bit";//�����3
	int len =  my_strlen(arr);//���ַ����ĳ���
	printf("len = %d\n", len);
	return 0;
}