#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	//数位的算法
	int x;
	int n = 0;
	scanf("%d",&x);
	while (x > 0) 
	{	n++;
		x /= 10;
	}
	printf("%d\n", n);
	return 0;
}