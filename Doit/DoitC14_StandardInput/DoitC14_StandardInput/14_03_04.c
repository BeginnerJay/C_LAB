// ���� ������ ���ڿ��� ó���ϴ� �Լ� �����

// ���� ���·� ������ ���ڿ��� ������ �ٲٴ� �Լ��� ��� �󵵰� ����.
// �׷��� �Լ��� ������ ���� ���α׷����� ����ϴ� ���� ����.
// ���� �ڵ�� gets �Լ��� ����Ͽ� ����ڿ��� �� ���� ���ڸ� �Է¹޾Ƽ� �ջ��ϴ� �����̴�.

#include <stdio.h>
int ArraytoInteger(char string[]) // ���ڿ��� �ٲٴ� �Լ� ����
{
	int count = 0, num = 0;
	// ���ڿ��� ���� ������ �ݺ���
	while (string[count] != 0 && string[count] != '\n') // fgets���� ���ڿ� ���� '\n'�� �߰��ȴ�.
	{
		// �ݺ��� ������ ���� ���� 10�� ���ؼ� �ڸ����� ������Ŵ
		num = num * 10 + string[count] - '0';
		count++;
	}
	return num;
}

main()
{
	int first_num, second_num;
	char first_string[16], second_string[16];

	printf("input first number : ");
	fgets(first_string,16,stdin);
	printf("input second number : ");
	fgets(second_string, 16, stdin);

	first_num = ArraytoInteger(first_string);
	second_num = ArraytoInteger(second_string);

	printf("%d + %d = %d\n", first_num, second_num, first_num + second_num);
}