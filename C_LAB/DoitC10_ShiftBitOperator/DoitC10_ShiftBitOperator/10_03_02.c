#include <stdio.h>
// ������ Ư�� ��Ʈ�� 1�� ����� ����
unsigned char SetBit(unsigned char dest_data, unsigned char bit_num)
/*
dest_data ������ bit_num��° �ִ� ��Ʈ�� �����ϴ� �Լ��� �ش� ��Ʈ�� 1���� ������ ���� ��ȯ�Ѵ�.
*/
{
	// 1����Ʈ ������ ��Ʈ �̵��� 0~7���� ������
	if (bit_num < 8)
	{
		dest_data = dest_data | (0x01 << bit_num);
	}
	// ����� ���� ��ȯ��
	return dest_data;
}

main()
{
	unsigned char lamp_state = 0x77;
	// 16���� 0x77�� 2���� 0111 0111
	printf("%X -> ", lamp_state); //���� �� ���� �����
	lamp_state = SetBit(lamp_state, 3); // 16���� 0x77�� 0111 0111
	printf("%X\n", lamp_state); // ���� �� ���� �����
}