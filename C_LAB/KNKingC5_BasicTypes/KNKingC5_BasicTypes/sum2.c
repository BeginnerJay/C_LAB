// Sums a series of numbers (using long variables)
#include <stdio.h>

int main(void)
{
	long n, sum = 0;

	printf("This program sums a series of integers.\n");
	printf("Enter integers (0 to terminate) : ");

	scanf_s("%ld", &n);
	while (n != 0)
	{
		sum += n;
		scanf_s("%ld", &n);
	}
	printf("The sum is : %1d\n", sum);
}
// �μ��� int���� long���� �ٲٰ�, %d ��ſ� %ld �Ἥ integer overflow �ذ�!