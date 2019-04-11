// ���� ���� ���� ���(pointer)���� ���� �� ��ȯ�ϱ�
/*
short birthday; // 1. ���� ����
short *ptr; // 2. ������ ���� ����
ptr = &birthday; // 3. ptr = &��¼���� ptr ������ ������ ����Ű�� �ּҸ� �����ϴ� ��. �� birthday ������ �ּҸ� ptr ������ ����
*ptr = 0x0412; // 4. *ptr = ��¼�� �� ������ ������ ����Ű�� ����� ���� �����ϴ� ��. �� birthday ������ ���� 0x0412�� �ʱ�ȭ

short *ptr = &birthday�� 2�� 3 ��ĥ �� ����.
*/
// pointer�� ���� ��½�Ű�� �ּҰ� ���, *ptr ��½�Ű�� indirect addressing �ؼ� ptr�� ����� �������� �´� �޸𸮿� �ִ� �� ��´�.
#include <stdio.h>
// temp ������ �̿��� a�� b�� ���� ���� �ٲ�
void Swap(int *pointerStart, int *pointerEnd)
// pointerStart ������ start�� indirect addressing, pointerEnd ������ end ������ indirect addressing
{
	int temp; // �ٲ� ���� �ӽ÷� ������ ���� ����
	temp = *pointerStart; // �ӽ� ���� ������ main���� ������ �� ����
	*pointerStart = *pointerEnd; // main�� end �������� ������ ���� pointerStart �� ����Ű�� ������ ���� ����
	*pointerEnd = temp; // main�� start�������� ���ͼ� temp ������ �� �״� ���� pointerEnd�� ����Ű�� ������ ���� ����
}

main()
{
	int start = 96, end = 5; // ������ ����� ���� ���� 
	printf("%d, %d\n", start, end);
	if (start > end)
	{
		Swap(&start, &end); // *pointerStart = &start �׸��� *pointerEnd = &end�� ������ ������ �ּ� ����. ���� 96�� 5�� ����Ų��.
		// ���� �� 96�� 5��� ���� Swap�Ǿ� ���ƿ� ���̴�.
	}
	printf("%d, %d", start, end);
}
// const int *const ptr;
// �����ʿ� �ִ� cosnt�� ptr �� ��ü�� ����(��, �ּҰ� ����)
// ���ʿ� �ִ� const�� *ptr ���� ����(��, ����Ű�� ������ �� ����)