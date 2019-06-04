// Checks numbers for repeated digits
// checks whether any of the digits in a number
// appear more than once.
#include <stdbool.h> // C99 only
#include <stdio.h>
main()
{
	bool digit_seen[10] = { false };
	// �����Ϸ��� �������� 0���� �ʱ�ȭ(0 = false)
	int digit; long n;

	printf("Enter a number : ");
	scanf_s("%ld", &n);

	while (n > 0)
	{
		digit = n % 10;
		// ���� ��� 28212 �ԷµǸ�
		// ù��°�� �ݺ��Ǵ� digit�� 2.
		// digit[2]�� true�� �ȴ�.
		// �� digit�� 2�� �Ǹ�
		// �ݺ����� ����ȴ�.
		if (digit_seen[digit])
		{
			break;
		}
		digit_seen[digit] = true; 
		n /= 10;
		//���� �ڸ����� ���� �ݺ� ���� ����� ���� ������
	}
	if (n > 0)
	{
		printf("Repeated digit\n");
	}
	else
	{
		printf("No repeated digit\n");
	}
}