/*
�迭�� ����� ������ ����θ� �Է¹��� �� ����.
	1. 2���� �迭 ����ϱ�
	�ִ� �ο����� 4���� ũ�� �����Ϸ��� �ҽ� �ڵ忡�� count �迭�� ũ�⸦ ���� �����ؾ� �Ѵ�.
		�̷��� �Ǹ� �ҽ� �ڵ带 �ٽ� �������ؾ� �Ѵ�.
	2. ������ �迭 ����Ͽ� �޸� �Ҵ��ϱ�
		����ڰ� �Է��� �ο�����ŭ �޸𸮸� �������� �Ҵ��ؾ� �Ѵ�.
		���������� ��ȭ�� ���� -> ������ �迭�� ����Ͽ� 3���� ������ ����
		�� �� �� �����Ϳ� malloc �Լ� ��� -> ����ڰ� �Է��� ���ɺ� �ο����� �޸� ���� �Ҵ�
*/
// ������ �迭�� ���ɺ� ���� ����Ű�� Ƚ�� �����ϱ�
#include <stdio.h>
#include <malloc.h>
main()
{
	unsigned char limit_table[3]; // ���ɹ� �ο����� ������ �迭 -> ����ڿ��� �Է¹���
	unsigned char *p[3]; // ���ɺ� ���� ����Ű�� Ƚ���� ������ �迭
	int age, member, temp, sum;
	for ( age = 0; age < 3; age++)
	{
		printf("\n%d0�� ������ ���� ����Ű�� Ƚ��\n", age + 2);
		printf("�� ���ɴ�� �� ���Դϱ�?");
		scanf_s("%d", &temp);
		limit_table[age] = (unsigned char)temp;
		
		p[age] = (unsigned char *)malloc(limit_table[age]); // �Է¹��� �ο�����ŭ �޸𸮸� �Ҵ���

		for (member = 0; member < limit_table[age]; member++) // �ش� ���� ����� ������� �Է¹���
		{
			printf("%dth : ", member + 1); // 1th, 2th .. ������ �Է¹���
			
			// scanf_s�� unsigned char ������ ���� ������ ���� �� ����
				// temp �������� ������ �Է¹��� �Ŀ� *(p[age] + member)�� ����
			
			scanf_s("%d", &temp);
			*(p[age] + member) = (unsigned char)temp;
		}
	}

	printf("\n\n���ɺ� ��� ���� ����Ű�� Ƚ��");
	// ���ɺ��� �Էµ� Ƚ���� �ջ��Ͽ� ��հ��� �����
	for (age = 0; age < 3; age++)
	{
		sum = 0;
		printf("%d0�� : ", age + 2);
		// �ش� ���ɿ� �Ҽӵ� ������� Ƚ���� �ջ���
		for (member = 0; member < limit_table[age]; member++)
		{
			sum += *(p[age] + member);
		}
		// �ջ� ���� �ο����� ����� ����� ��
		printf("%5.2f\n", (double)sum / limit_table[age]);
		free(p[age]);
	}
}
// ������ �������� �پ������ٸ�??