// strlen �Լ��� ����Ͽ� ���ڿ� ���� ����ϱ�
#include <stdio.h>
#include <string.h> // ���ڿ� ǥ�� �Լ��� ����ϱ� ���� �߰���

main()
{
	int data_length; // ���ڿ� ���̸� ������ ����
	char data[] = "happy";
	data_length = strlen(data);// data ������ ��� �ִ� ���ڿ��� ���̸� ����
	printf("data length = %d\n", data_length); // ���ڿ��� ���̸� ���
}
/*
��Ÿ�� ���̺귯�� �Լ� �� ���� �ʿ� ����. C ��� ���� �������� �ش� �Լ� ���� �� �� ����.
strlen, strcpy, strcat �Լ��� ���� ������ ��! ���� ����.
*/