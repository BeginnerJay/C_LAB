// for �ݺ����� �Լ��� �̿��ؼ� ������ 2�� ��� ���α׷� �����
#include <stdio.h>
//�Լ�ȭ(main���� ��� ���� �� ���� �ʰ�)
//�Լ��� main�Լ����� ������ ���� �ۼ�! �ƴϸ� error!
void ShowMultiplication()
{
	int i;
	for (i = 1; i <= 9; i++)
	{
		// 2 * i �������� �����
		printf("2 * %d = %d\n", i, 2 * i);
	}
}



main()
{
	ShowMultiplication();
}
