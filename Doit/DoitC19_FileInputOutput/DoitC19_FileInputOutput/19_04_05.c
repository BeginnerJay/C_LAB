// fgets �Լ��� ���ڿ��� �� ������ ��� �о� ����
#include <stdio.h>
#include <stdlib.h>

main()
{
	char temp[64]; // ���Ͽ��� ���ڿ��� �Է¹��� �迭 ����
	FILE* p_file;
	errno_t err = fopen_s(&p_file, "�����ϴ� ���ε��� ����.txt", "rt");
	if (err)
	{
		printf("The file is not opened");
	}
	else
	{
		// �� ��° �Ű������� ù ��° �Ű������� ���Ǵ� �޸��� ũ�� ǥ��
		while (NULL != fgets(temp, sizeof(temp), p_file))
		{
			printf("%s", temp);
			// gets �Լ��� �� ���� �ִ� \n�� �о temp �迭 �������� �־� �ֱ� ������ \n ���� �ʴ´�.
		}
		fclose(p_file);
	}
}