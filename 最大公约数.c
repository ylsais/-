#include<stdio.h>
int main()
{
	//����һ
	/*int a, b;
	int min;
	scanf_s("%d %d", &a, &b);
	if (a < b) {
		min = a;
	}
	else {
		min = b;
	}
	int ret = 0;
	int i;
	for (i = 1; i < min; i++) {
		if (a % i == 0) {
			if (b % i == 0) {
				ret = i;
			}
		}
	}
	printf("%d��%d�����Լ����%d.\n", a, b, ret);*/
	//������
	int a, b;
	int t;
	scanf_s("%d %d", &a, &b);
	while (t != 0) {
		t = a % b;
		a = b;
		b = t;
	}
	printf("%d",a);
	return 0;
}