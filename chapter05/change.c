#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	int price;
	int money;
	int change;
	int change5000;
	int change1000;
	int change500;
	int change100;

	printf("���� ���� �Է��Ͻÿ�: ");
	scanf("%d", &price);
	printf("����ڰ� �� ��: ");
	scanf("%d", &money);

	change = money - price;

	printf("�Ž�����: %d\n", change);

	change5000 = change / 5000;
	change = change - 5000 * change5000; //%�� �̿��Ͽ� �ٲٸ� -> change = change % 5000;

	change1000 = change / 1000;
	change = change - 1000 * change1000;

	change500 = change / 500;
	change = change - 500 * change500;

	change100 = change / 100;
	change = change - 100 * change100;

	printf("��õ����: %d��\n", change5000);
	printf("õ����: %d��\n", change1000);
	printf("����� ����: %d��\n", change500);
	printf("��� ����: %d��\n", change100);

	return 0;
}