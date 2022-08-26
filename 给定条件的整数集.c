#include<stdio.h>
int main()
{
	/*
	题目
	给定不超过6的正整数A,考虑从A开始的连续4个数字。请输出所有由他组成的无重复的3位数。
	输入格式：
	输入在一行中给出A。
	输出格式：
	输出满足条件的3位数，要求从小到大，每行6个整数。整数间以空格分隔，但末行不能有多余空格
	*/
	int a;
	scanf_s("%d", &a);
	int i, j, k;
	i = a;
	int count = 0;
	while (i <= a + 3) {
		j = a;
		while (j <= a + 3) {
			k = a;
			while (k <= a + 3) {
				if (i != j) {
					if (i != k) {
						if (j != k) {
							count++;
							printf("%d%d%d", i, j, k);
							if (count == 6) {
								printf("\n");
								count = 0;
							}
							else {
								printf(" ");
							}
						}
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}

	return 0;
}