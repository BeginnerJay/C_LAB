// for �ݺ����� �Լ��� �̿��ؼ� ������ Ư�� �� ��� ���α׷� �����
#include <stdio.h>
//�Լ�ȭ(main���� ��� ���� �� ���� �ʰ�)
//�Լ��� main�Լ����� ������ ���� �ۼ�! �ƴϸ� error!
void ShowMultiplication(int step)
{
	int i;
	for (i = 1; i <= 9; i++)
	{
		// step * i �������� �����
		printf("%d * %d = %d\n", step, i, step * i);
	}
}

main()
{
	int step;
	for (step = 2; step <= 9; step++)
	{
		ShowMultiplication(step);
	}
}
