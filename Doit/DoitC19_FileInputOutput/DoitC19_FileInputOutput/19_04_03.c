#include <stdio.h>

main()
{
	int num;
	errno_t err;
	FILE* p_file;
	err = fopen_s(&p_file, "number.txt", "rt");
	if (err)
	{
		printf("The file is not opened");
	}
	else
	{
		while (EOF != fscanf_s(p_file, "%d", &num))
		// �ؽ�Ʈ ������ ���� EOF���ڷ� �����ϴµ�, fscanf �Լ��� EOF ���ڸ� ������ EOF ���� ��ȯ�Ѵ�.
		// ����  EOF�� ��ȯ�� ������ �ݺ��ϸ鼭 ���� ���� �о� �´�.
		{
			printf("%d\n", num);
		}
		fclose(p_file);
	}
}