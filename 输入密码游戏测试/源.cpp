#define   _CRT_SECURE_NO_WARNINGS  1

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	char password[10] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", password);
		if(strcmp(password, "00000000") == 0)//strcmp������string�ļ�
			{
				printf("������ȷ����¼�ɹ���\n");
				break;
			}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
		printf("����������������˳�����\n");
	return 0;
 } 