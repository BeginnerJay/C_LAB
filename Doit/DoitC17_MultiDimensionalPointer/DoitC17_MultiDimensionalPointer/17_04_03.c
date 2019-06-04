/*
malloc �Լ��� ����ϸ� 1���� �����͸� ���ϴ� ������ŭ �������� �Ҵ��� �� �ִ�.
age_step ���� �߰�.
age_step ������ malloc �Լ��� ���� �Ҵ�(p_limit_table �迭�� �� �̻� �����Ǿ� ���� ����)
*/
// 2���� �����ͷ� ���ɺ� ���� ����Ű�� Ƚ�� �����ϱ�
#include <stdio.h>
#include <malloc.h>
main()
{
	unsigned char *p_limit_table; // ���ɹ� �ο����� ������ ������ -> ����ڿ��� �Է¹���
	unsigned char **p; // ���ɺ� ���� ����Ű�� Ƚ���� ������ 2���� ������
	int age, age_step, member, temp, sum;
	
	printf("20����� �����ؼ� �������� �� ���ΰ��� : ");
	scanf_s("%d", &age_step);
	// ���ɺ� �ο����� ������ �޸𸮸� ����
	p_limit_table = (unsigned char *)malloc(age_step);
	p = (unsigned char *)malloc(sizeof(unsigned char *) * age_step);
	
	for (age = 0; age < age_step; age++)
	{
		printf("\n%d0�� ������ ���� ����Ű�� Ƚ��\n", age + 2);
		printf("�� ���ɴ�� �� ���Դϱ�?");
		scanf_s("%d", &temp);
		*(p_limit_table + age) = (unsigned char)temp;

		*(p + age) = (unsigned char *)malloc(*(p_limit_table + age)); // �Է¹��� �ο�����ŭ �޸𸮸� �Ҵ���

		for (member = 0; member < *(p_limit_table + age); member++) // �ش� ���� ����� ������� �Է¹���
		{
			printf("%dth : ", member + 1); // 1th, 2th .. ������ �Է¹���

			// scanf_s�� unsigned char ������ ���� ������ ���� �� ����
				// temp �������� ������ �Է¹��� �Ŀ� *(p[age] + member)�� ����

			scanf_s("%d", &temp);
			*(*(p + age) + member) = (unsigned char)temp;
		}
	}

	printf("\n\n���ɺ� ��� ���� ����Ű�� Ƚ��");
	// ���ɺ��� �Էµ� Ƚ���� �ջ��Ͽ� ��հ��� �����
	for (age = 0; age < age_step; age++)
	{
		sum = 0;
		printf("%d0�� : ", age + 2);
		// �ش� ���ɿ� �Ҽӵ� ������� Ƚ���� �ջ���
		for (member = 0; member < *(p_limit_table + age); member++)
		{
			sum += *(*(p + age) + member);
		}
		// �ջ� ���� �ο����� ����� ����� ��
		printf("%5.2f\n", (double)sum / *(p_limit_table + age));
		free(*(p + age));
	}
	free(p);
	free(p_limit_table);
}