// �ݺ����� ����Ͽ� �迭�� ��� ��Ҹ� 0���� �ʱ�ȭ�ϱ�
#include <stdio.h>
main()
{
	short student[20];
	for (short i = 0; i < 20; i++)
	{
		student[i] = 0;
	}

	student[1] = 10;
	printf("%d %d\n", student[1], student[2]);
}
// �ʱ�ȭ ���ϸ� ������ ���� �� �ִ�.