// break���� �̿��� ��ü �ݺ��� ����������
#include <stdio.h>

main()
{
	int m, n;
	for (m = 5; m < 7; m++)
	{
		for (n = 0; n < 3; n++)
		{
			if (m == 5 && n == 1)
			{
				break; // n�� ����ϴ� �ݺ������� break������ �������ͼ�
			}
			if (n == 2)
			{
				continue;
			}
			printf("m(%d) - n(%d)\n", m, n);
		}
		// m�� 5�� n�� 1�� �� break�� ����
		if (m == 5 && n == 1)
		{
			break; // �Ǵٽ� ���� ���ǹ��� �ɷ� break���� ���� -> m�� �̿��ϴ� �ݺ����� ����
		}
	}
}