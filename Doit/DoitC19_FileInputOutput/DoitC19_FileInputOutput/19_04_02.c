// fscanf �Լ��� ���ڿ� ������ ���� �� �о� ����
#include <stdio.h>

main()
{
	errno_t err;
	FILE* p_file;
	int num1, num2, num3;
	err = fopen_s(&p_file, "number.txt", "rt");
	if (err)
	{
		printf_s("The file is not opened\n");
	}
	else
	{
		// num1�� 412, num2�� 100, num3�� 123 ���� ������.
		fscanf_s(p_file, "%d %d %d", &num1, &num2, &num3);
		printf("%d %d %d\n", num1, num2, num3);
		fclose(p_file);
	}
}