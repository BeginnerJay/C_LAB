// fread �Լ��� ���̳ʸ� ������ ù 4����Ʈ �� �о����
#include <stdio.h>

void main()
{
	int data;
	FILE* p_file;
	errno_t err = fopen_s(&p_file, "jin.dat", "rb");
	if (err)
	{
		printf("File is not opened");
	}
	else
	{
		fread(&data, sizeof(int), 1, p_file);
		fclose(p_file);
		printf("File data : %d(0x%04x)\n", data, data);
	}
}