// ���� �޸� �Ҵ��� ����Ͽ� ���ڸ� �Է¹޾� �ջ��ϱ�
#include <stdio.h>
#define MAX_COUNT 5 // �ִ� �Է��� 5ȸ�� ������
main()
{
	int num[MAX_COUNT], count = 0, sum = 0;
	while (count < MAX_COUNT)
	{
		printf("���ڸ� �Է��ϼ��� (9999�� ������ ����) : ");
		scanf_s("%d", num + count); // scanf_s("%d", &num[count]�� ���� ǥ��
		if (num[count] == 9999)
		{
			break;
		}
		count++; // �Էµ� Ƚ���� �����
	}
	// �Էµ� Ƚ����ŭ ���ڸ� �����
	for (int i = 0; i < count; i++)
	{
		if (i > 0) 
		{
			printf(" + "); // ���ڿ� ���� ���̿� + �� �����
		}
		printf(" %d ", num[i]); // �Է��� ���ڸ� �����
		sum = sum + num[i]; // �Է��� ���ڵ��� �ջ���
	}
	printf(" = %d\n", sum); // �ջ��� ���� �����
}