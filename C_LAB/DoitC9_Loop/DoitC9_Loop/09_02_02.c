//do ~ while �ݺ����� ����Ͽ� 1���� 5���� ���ϱ�
#include <stdio.h>
//do while�� ���� ������ �����̶� �� ���� ��ɹ��� �����ϰ� �����Ѵ�.
main()
{
	int sum = 0, num = 1;

	do
	{
		printf("num(%d) + sum(%d) = ", num, sum);
		sum = sum + num; // sum�� num�� ����
		printf("%d\n", sum);//���� �� sum���� ����ϰ� �� �ٲ�
		num++; // ���� ��ȭ ����
	} while (num <= 5);
	printf("\nResult : num = %d sum = %d\n", num, sum);
}