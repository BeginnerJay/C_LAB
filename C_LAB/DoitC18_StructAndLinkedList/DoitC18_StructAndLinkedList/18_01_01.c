// typedef�� ������ �ڷ������� ���� �����ϱ�
#include <stdio.h>

// unsigned short int���� US��� ���ο� �̸����� ������
typedef unsigned short int US;
// �����ǵǾ��ų� ġȯ�Ǿ����� �˸��� ���� ��� �빮�ڷ� �̸����� ���� ����.

main()
{
	unsigned short int data = 5;
	US temp;

	temp = data;
	printf("temp = %d\n", temp);
}