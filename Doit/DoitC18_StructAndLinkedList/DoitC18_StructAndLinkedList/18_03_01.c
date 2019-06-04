#include <stdio.h>
#define MAX_COUNT 5 // ģ�� ��� ������ �ִ� ��

// �迭�� ����� ģ�� ���� �����ϱ�

typedef char NAME_TYPE[14];
/*
MAX_COUNT��ŭ�� ģ�� �̸��� �����ϱ� ���� name �迭�� char name[MAX_COUNT][14]; ó�� 2���� �迭�� �����Ͽ� ���.
name �迭�� �ٸ� �Լ����� �����ͷ� �������� char (*p_name)[14]ó�� ����ؾ� �Ѵ�.
�̴� ���°� �����ϱ� ������, �̸��� ���� �ڷ��� NAME_TYPE�� �������Ѵ�.
*/

int AddFriend(NAME_TYPE *p_name, unsigned short int *p_age, float *p_height, float *p_weight, int count)
{
	if (MAX_COUNT) // �Է� ������ �ִ� ���� �Ѿ����� üũ��
	{
		printf("\n���ο� ģ�� ������ �Է��ϼ���\n");
		printf("1. �̸� : ");
		scanf_s("%s", *(p_name + count), 14);
		printf("2. ���� : ");
		scanf_s("%hu", (p_age + count));
		printf("3. Ű : ");
		scanf_s("%f", (p_height + count));
		printf("4. ������ : ");
		scanf_s("%f", (p_weight + count));
		printf("�Է��� �Ϸ��߽��ϴ�. \n\n");
		return 1; // ģ�� �߰� �����ϸ� 1�� ��ȯ��.
	}
	else // �Է� ������ �ִ� ���� �Ѿ��� �� ������ �����
	{
		printf("�ִ� �ο��� �ʰ��Ͽ� �Է��� �� �����ϴ�.\n");
		printf("�ִ� %d������� ���� �����մϴ�.\n\n", MAX_COUNT);
	}
	return 0; // ģ�� �߰� ����
}

void ShowFriendList(NAME_TYPE* p_name, unsigned short int* p_age, float* p_height, float* p_weight, int count)
{
	if (count > 0)
	{
		printf("\n��ϵ� ģ�� ���\n");
		printf("=======================================\n");
		for (int i = 0; i < count; i++)
		{
			printf("%-14s, %3d, %6.2f, %6.2f\n", *(p_name + i), *(p_age + i), *(p_height + i), *(p_weight + i));
		}
		printf("=======================================\n\n");
	}
	else // ��ϵ� ģ���� ������ ������ �����
	{
		printf("\n��ϵ� ģ���� �����ϴ�.\n\n");
	}
}

void main()
{
	NAME_TYPE name[MAX_COUNT]; // ģ�� �̸��� ������ �迭
	unsigned short int age[MAX_COUNT]; // ģ�� ���̸� ������ �迭
	float height[MAX_COUNT];
	float weight[MAX_COUNT];
	int count = 0, num;

	while (1)
	{
		printf("[menu]\n");
		printf("=======================================\n");
		printf("1. ģ�� �߰�\n");
		printf("2. ģ�� ��� ����\n");
		printf("3. ����\n");
		printf("=======================================\n");
		printf("��ȣ ���� : ");
		scanf_s("%d", &num); // ����ڿ��� ��ȣ�� �Է¹���
		if (num == 1)
		{
			if (1 == AddFriend(name, age, height, weight, count))
			{
				count++;
			}
		}
		else if (num == 2)
		{
			ShowFriendList(name, age, height, weight, count);
		}
		else if (num == 3)
		{
			break;
		}
		else
		{
			printf("��ȿ���� ���� ��ȣ�Դϴ�!\n\n");
		}
	}
}