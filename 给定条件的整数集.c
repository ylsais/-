#include<stdio.h>
int main()
{
	/*
	��Ŀ
	����������6��������A,���Ǵ�A��ʼ������4�����֡����������������ɵ����ظ���3λ����
	�����ʽ��
	������һ���и���A��
	�����ʽ��
	�������������3λ����Ҫ���С����ÿ��6���������������Կո�ָ�����ĩ�в����ж���ո�
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