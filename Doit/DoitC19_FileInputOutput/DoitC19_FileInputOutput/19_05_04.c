//fseek �Լ��� ftell �Լ��� ���̳ʸ� ���� ũ�� �˾Ƴ���
#include <stdio.h>

void main()
{
	int file_size = 0;
	FILE* p_file;
	errno_t err = fopen_s(&p_file, "�����ϴ� ���ε��� ����.txt", "rb");
	if (err)
	{
		printf("File is not opened");
	}
	else
	{
		fseek(p_file, 0, SEEK_END); // ������ ������ �̵���
		file_size = ftell(p_file); // ���� ���� ��ġ�� ������ ũ�⸦ ����
		printf("���� ũ�� : %d\n", file_size);
		fclose(p_file);
	}
}