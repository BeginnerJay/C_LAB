#include <stdio.h>
unsigned char GetBit(unsigned char dest_data, unsigned char bit_num)
{
	unsigned char bit_state = 0; // 1����Ʈ ������ ��Ʈ �̵��� 0~7������ ������
	if (bit_num < 8)
	{
		bit_state = dest_data & (0x01 << bit_num);
		bit_state = bit_state >> bit_num;
	}
	// bit_num�� ������ ��Ʈ ���� ��ȯ��
	return bit_state;
}

main()
{
	unsigned char lamp_state = 0x75;
	unsigned char bit_state;
	int i;

	printf("%X -> ", lamp_state); // 16�������� ���� ���� �����
	for (i = 0; i < 8; i++) // 8�� ��Ʈ ���� ��� ����ϱ� ���� 8�� �ݺ�
	{
		bit_state = GetBit(lamp_state, 7 - i);
		printf("%d", bit_state);
	}
	printf("\n");
}