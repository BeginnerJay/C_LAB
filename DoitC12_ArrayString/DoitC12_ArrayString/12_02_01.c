// �迭�� ���ڿ��� �����ϰ� ����ϱ�
#include <stdio.h>
main()
{
	//char data[5] = { 'h','a','p','p','y' };
	char data[6] = { 'h','a','p','p','y', 0 };
	//char data_length = 5;
	// char data[6] = { 'h','a','p','p','y', 0 }�̳� char data[6] = "happy" �� ���� ǥ���̴�.
	char ment[] = "C Programming~!"; // [] ���� ���ڸ� �����ص� �ȴ�.
	
	printf("%s\n", data);
	printf("%s\n", ment);
}