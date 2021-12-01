#define   _CRT_SECURE_NO_WARNINGS  1

#include<stdio.h>
#include<math.h>
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;

	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;

}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("ret=%d\n", ret);//如果要计算大数字，需要将int改为long int
	return 0;
}