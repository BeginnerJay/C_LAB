#include "remind.h"
#include <stdio.h>

int read_line(char str[], int n)
{
	int ch = getchar(), i = 0;
	while (ch != '\n'); // new-line character�� ������ ������
	{
		if (i < n)
		{
			str[i] = ch;
			i++;
		}
	}
	str[i] = '\0'; // null character �ٿ��༭ string���� ó���� �� �ְԲ� �Ѵ�.
	return i;
}