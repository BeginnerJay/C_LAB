// �ٸ� ������ �ּҸ� ����Ͽ�, �����ͷ� �� �����ϱ�
#include <stdio.h>
main()
{
	short birthday;
	short *ptr; // ������ ���� ����
	ptr = &birthday; // birthday ������ �޸� �ּҸ� ptr ������ ������ ������
	*ptr = 0x0412; // birthday ������ 0x0412��� ���� ������ �̿��� ���� �ּ� ���� ����� �ƴ� �����͸� �̿��� ���� �ּ� ���� ������� ����

	printf("birthday = %d (0x%04X)\n", birthday, birthday);
}