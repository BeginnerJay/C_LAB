// �迭�� �� ��ҿ� ����� �� ���ϱ�
#include <stdio.h>
main()
{
	// data �迭�� 1~5�� �ʱ�ȭ
	char data[5] = { 1, 2, 3, 4, 5 };
	// ���� ���� ������ result ������ 0���� �ʱ�ȭ
	int result = 0, i;

	//�迭�� ��  ��� ���� result ������ ���ϴ� ������ �ݺ���
	for ( i = 0; i < 5; i++)
	{
		result = result + data[i];
	}
	
	printf("data �迭�� �� ����� ���� %d�Դϴ�\n", result);
}
// �迭�� ����� ���� �ڷ����̴�
// -> C ������ �⺻���� �����ϴ� �ڷ������� ǥ���� �� ���� 3����Ʈ, 5����Ʈ ũ���� ������ �迭�� ���� �� �ִ�.