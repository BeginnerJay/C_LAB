// �Լ� �����͸� ����Ͽ� ����� �Լ��� �ݺ������� ȣ���ϱ�
#include <stdio.h>
int Sum(int a, int b)
{
	return a + b;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b) 
{
	return a * b;
}
int Div(int a, int b)
{
	return a / b;
}

main()
{
	int(*p[4])(int, int) = { &Sum, &Sub, &Mul, &Div };
	int i;
	char op_table[4] = { '+', '-', '*', '/' };
	// �������� ������ ȣ����
	for (i = 0; i < sizeof(*p); i++) { // sizeof(p) �ϸ� ��������
		printf("%d %c %d = %d\n", 8, op_table[i], 2, (*p[i])(8, 2));
	}
	
}