// fwrite �Լ��� ���̳ʸ� ���Ͽ� int �� ���� �� �����ϱ�
#include <stdio.h>
main()
{
	int data = 0x00000412;
	FILE* p_file;
	errno_t err = fopen_s(&p_file, "jin.dat", "wb");
	if (err)
	{
		printf("The file is not opened");
	}
	else
	{
		fwrite(&data, sizeof(int), 1, p_file);
		// data�� ���� �ּҺ���, 4����Ʈ ũ�⸸ŭ��, �� ����, p_file ���� �����Ͱ� ����Ű�� ���Ͽ�, �����Ѵ�.
		fclose(p_file);
		printf("File written");
	}
}