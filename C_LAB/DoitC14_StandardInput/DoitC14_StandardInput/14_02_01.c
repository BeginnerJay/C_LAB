// getchar() �Լ��� �̿��Ͽ� Ű���忡�� ���� �� �� �Է¹ޱ�
// �� �Լ��� �̿��� ��, ���� �� ���� �Է¹޴��� Enter Ű�� �����߸� �۾��� �Ϸ�ȴ�.
#include <stdio.h>
main()
{
	int input_data;
	printf("Enter one character : ");
	// ǥ�� �Է� �Լ��� ����Ͽ� ���ڸ� �� �� �Է¹���
	input_data = getchar();
	// �Է¹��� ���ڸ� �����
	printf("input : %c\n", input_data);
}
// getchar() ������ int �������� �����͸� ��ȯ�մϴ�.
// �׷��� int�� ������ ��ȯ���� �޴� ���� �Ϲ���������, char ������ �޾Ƶ� �ȴ�.