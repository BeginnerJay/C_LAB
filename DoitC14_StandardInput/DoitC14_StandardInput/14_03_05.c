// ArraytoInteger�� ���� ������ �ʾƵ� C ǥ�� ���̺귯������ atoi��� �Լ��� �����Ѵ�.
#include <stdio.h>
#include <stdlib.h> // atoi �Լ��� ����ϱ� ���� ���Խ�Ŵ
main()
{
	int first_num, second_num;
	char first_string[16], second_string[16];
	printf("input first number : ");
	fgets(first_string, 16, stdin);
	printf("input second number : ");
	fgets(second_string, 16, stdin);

	first_num = atoi(first_string); // ���ڿ� -> ����
	second_num = atoi(second_string); // ���ڿ� -> ����
	// ������ ��ȯ�� �� ���� �ջ��� ��� ���� �����
	printf("%d + %d = %d\n", first_num, second_num, first_num + second_num);
}