//While �ݺ����� ����Ͽ� 1���� 5���� ���ϱ�
#include <stdio.h>
//while�� ���� ������ ������ �� ������ ��ɹ��� �ݺ��ϴ� ����
//�ݺ��� 3��Ұ� �и��ϰ� ������ �ִٸ� for �ݺ����� ����ϴ� ���� ��
main()
{
	// while �ݺ��������� ���� ������ ������ �� ����.
	int sum = 0, num = 1;
	int i = 1;
	// 1���� 5���� 1�� ������Ű�鼭 �ݺ���
	while (num <= 5)
	{
		printf("num(%d) + sum(%d) = ", num, sum);
		sum = sum + num; // sum�� num�� ����
		printf("%d\n", sum);//���� �� sum���� ����ϰ� �� �ٲ�
		num++; // ���� ��ȭ ����
	}
	printf("\nResult : num = %d sum = %d\n", num, sum);
	while (i <= 10)
	{
		printf("�ȳ��ϼ���!\n");
		i++;
	}
}