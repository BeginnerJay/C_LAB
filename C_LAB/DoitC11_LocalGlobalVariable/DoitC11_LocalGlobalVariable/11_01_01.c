//������ ��� ������ ���� ��ȿ�� �����ϱ�
#include <stdio.h>
int Sum(int data1, int data2)
// �Ű����� data1, data2�� Sum �Լ��� ���� ����
{
	// Sum �Լ��� ���� ���� result�� ������ �� data1 + data2 ������ �ʱ�ȭ
	int result = data1 + data2;
	return result;
}

main()
{
	int result; // main �Լ��� ���� ���� result. �ʱ�ȭ���� �ʾ� � ���� ��� �ִ��� �𸥴�
	result = Sum(5, 3);
	printf("5 + 3 = %d\n", result);
}
/*
main �Լ��� Sum �Լ��� result ������ ���� �ٸ� �Լ��� ��� �ִ� ���� �����̱� ������ �̸��� ���Ƶ� ������ ó������ �ʴ´�.
�׸��� main �Լ������� Sum �Լ��� data1, data2, �׸��� result ������ ����� �� ����.
���� ������ ������ �ʱ�ȭ���� �ʱ� ������ �ʿ��� �� ���α׷��Ӱ� ���� �ʱ�ȭ�ؾ� �Ѵ�.
*/

