#include <stdio.h>
// for �ݺ����� ����Ͽ� 1���� 5���� ���ϱ�
void main()
{
	// ���� ���� ������ sum�� �ջ꿡 ����� ���ڸ� ������ num�� ����
	int sum, num;
	int fin;
	int i, j, k;
	// 1���� 5���� 1�� �����ϸ鼭 �ݺ���
	for (sum = 0, num = 1, fin = 5; num <= fin; num++)
	// �ջ��ϱ� �� sum���� ����Ͽ� 'num + sum = ' �̶�� �����
	{
		printf("num(%d) + sum(%d) = ", num, sum);
		sum = sum + num; // sum�� num�� ����
		printf("%d\n", sum);//���� �� sum���� ����ϰ� �� �ٲ�
	}
	// �ݺ��� ������ ���� �ٲ� �� num ���� ���� sum���� ���� �����
	printf("\nResult : num = %d sum = %d\n", num, sum);

	for (i = 1, j = 0, k = 100; i <= k; i++)
	{
		j += i;
	}
	printf("\n1���� %d������ ���� %d", k, j); // �ݺ��� �ȿ� ������ �� �̳� ���� �����
}