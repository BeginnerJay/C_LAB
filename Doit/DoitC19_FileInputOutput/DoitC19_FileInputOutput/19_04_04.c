// fscanf �Լ��� �⺻������ ���� ���ڸ� ������ ���� �Է��� ���۵� ������ ó���Ѵ�.
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
		while (EOF != fscanf_s(p_file, "%s", temp, _countof(temp)))
		{
			printf("%s\n", temp);
		}
		fclose(p_file);
	}
}