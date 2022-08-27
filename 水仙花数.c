#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	int count = 1;
	int number=1;
	while (count < n) {
		number *= 10;
		count++;
	}
	int i = number;
	while (number < i * 10) {
		int t = number;
		int sum = 0;
		do {
			int d = t % 10;
			t /= 10;
			int p = d;
			int j = 1;
			while (j < n) {
				p *= d;
				j++;
			}
			sum += p;
		} while (t > 0);
		if (sum == number) {
			printf("%d\n", number);
		}
		number++;
	}
	return 0;
}