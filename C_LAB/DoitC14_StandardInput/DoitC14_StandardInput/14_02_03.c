// rewind �Լ��� ����Ͽ� ǥ�� �Է� ���� �ʱ�ȭ�ϱ�
#include <stdio.h>
main()
{
	int input_data;
	input_data = getchar();
	rewind(stdin); // ǥ�� �Է� ���ۿ� �ִ� ��� �Է� ���� ������
	printf("first input : %c\n", input_data); // ù ��° ���� �޾Ƶ鿩 ����Ѵ�.
	input_data = getchar();
	rewind(stdin); // ǥ�� �Է� ���ۿ� �ִ� ��� �Է� ���� ������
	printf("second input : %c\n", input_data);
}