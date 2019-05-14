#include <stdio.h>
#define MAX_COUNT 5 // ģ�� ��� ������ �ִ� ��

typedef struct People
{
	char name[14]; 
	unsigned short int age[MAX_COUNT]; 
	float height[MAX_COUNT];
	float weight[MAX_COUNT];
} Person;


int AddFriend(Person *p_friend, int count)
{
	if (MAX_COUNT) // �Է� ������ �ִ� ���� �Ѿ����� üũ��
	{
		p_friend = p_friend + count;
		printf("\n���ο� ģ�� ������ �Է��ϼ���\n");
		printf("1. �̸� : ");
		scanf_s("%s", p_friend -> name, 14);
		printf("2. ���� : ");
		scanf_s("%hu", p_friend ->age);
		printf("3. Ű : ");
		scanf_s("%f", p_friend ->height);
		printf("4. ������ : ");
		scanf_s("%f", p_friend ->weight);
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

void ShowFriendList(Person *p_friend, int count)
{
	if (count > 0)
	{
		printf("\n��ϵ� ģ�� ���\n");
		printf("=======================================\n");
		for (int i = 0; i < count; i++)
		{
			printf("%-14s, %3d, %6.2f, %6.2f\n", p_friend->name, *p_friend->age, *p_friend->height, *p_friend->weight);
			p_friend++;
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
	Person friends[MAX_COUNT];
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
			if (1 == AddFriend(friends, count))
			{
				count++;
			}
		}
		else if (num == 2)
		{
			ShowFriendList(friends, count);
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