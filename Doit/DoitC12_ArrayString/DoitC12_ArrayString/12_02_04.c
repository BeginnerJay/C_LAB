// �� ���� ���ڿ� ��ġ��
#include <stdio.h>
#include <string.h> // ���ڿ� ǥ�� �Լ��� ����ϱ� ���� �߰���

main()
{
	
	char data[] = {'a', 'b', 'c', 0};
	char result[16];
	
	strcpy_s(result, 4, data); // ����� ���� ���� �迭, ����Ǵ� ���ڿ��� ����,����Ǵ� �迭
	strcat_s(result, sizeof(result),"def"); // abc��� ���� ����� result �迭�� , 6��ŭ�� �ִ�� �ؼ�, def�� �����δ�
	printf("%s + \"def\" = %s\n", data, result); // ���ڿ��� ���̸� ���
}
/*
��Ÿ�� ���̺귯�� �Լ� ���θ� ������ �ʿ�� ����. C ��� ���� �������� �ش� �Լ� ���� �� �� ����.
strlen, strcpy, strcat �Լ��� ���� ������ ��! ���� ����.
*/