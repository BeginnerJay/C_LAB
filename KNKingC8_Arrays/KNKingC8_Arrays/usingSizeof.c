// sizeof�� �迭�� ũ�⸦ �˾Ƴ� ������ ��� ����.
// 10��¥�� �迭�� sizeof ���� 40 ���´�.
// (assuming that each integer requires four bytes)
// sizeof(a[0])�� 4 ����
// �׷��Ƿ� sizeof(a) / sizeof(a[0])���� �迭 ������ ��Ȯ�ϰ�
// �Ź� ���� �������Ƿ�
// # define SIZE ( (int) (sizeof(a) / sizeof(a[0]) )���� �̸� ���� ���� 