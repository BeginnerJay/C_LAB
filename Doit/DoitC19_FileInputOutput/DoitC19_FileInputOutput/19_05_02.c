// fwirte �Լ��� ���̳ʸ� ���Ͽ� ���������� �� �����ϱ�
#include <stdio.h>

void main()
{
	int data = 100, data_list[5] = { 0,1,2,3,4 };
	FILE* p_file;
	errno_t err = fopen_s(&p_file, "numbers.dat", "wb");
	if (err)
	{
		printf("The file is not opened");
	}
	else
	{
		fwrite(&data_list, sizeof(int), 5, p_file);
		fwrite(&data, sizeof(int), 1, p_file);
		fclose(p_file);
		printf("file written");
	}
}