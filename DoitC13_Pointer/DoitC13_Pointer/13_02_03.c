// ���� �ּ� ���� ������� ���� �� ��ȯ�ϱ�
#include <stdio.h>
// temp ������ �̿��Ͽ� a�� b�� ���� ���� �ٲٴ� �Լ�
void Swap(int a, int b)
{
	int temp = a; // a = 96, b = 5
	a = b; // a = 5, b = 5 !! ����! �����ʿ� �ִ� ���� ���ʿ��� �ִ°�
	b = temp; // a = 5, b = 96
}

main()
{
	int start = 96, end = 5;

	printf("before : start = %d, end = %d\n", start, end);
	if (start > end)
	{
		Swap(start, end); // start�� end�� ���� �ٲٱ� ���� Swap �Լ� ȣ����.
	}
	printf("after : start = %d, end = %d\n", start, end);

}
// Swap �Լ��� ���ǿ� �°� ȣ��Ǿ���, start, end ���� ���� �Ķ���� a, b�� ���޹޾Ƽ� ���� ��ȯ�� �ߴ�.
// ������ main �Լ��� start, end �� ��� ���� ����� ������ a, b��� ���� �� ������ �����̴�.
// �Լ��� ȣ��Ǿ Swap �Լ��� �޸𸮿����� ������ ����ǰ�, main �Լ��� ������ �״�� �ִ�.
// �ٸ� �Լ��� ���� ���� ���� ������ �� �ִ� ������ ������ ����� �� ������ �ذ��� �ʿ䰡 �ִ�.