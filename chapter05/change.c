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

	printf("물건 값을 입력하시오: ");
	scanf("%d", &price);
	printf("사용자가 낸 돈: ");
	scanf("%d", &money);

	change = money - price;

	printf("거스름돈: %d\n", change);

	change5000 = change / 5000;
	change = change - 5000 * change5000; //%를 이용하여 바꾸면 -> change = change % 5000;

	change1000 = change / 1000;
	change = change - 1000 * change1000;

	change500 = change / 500;
	change = change - 500 * change500;

	change100 = change / 100;
	change = change - 100 * change100;

	printf("오천원권: %d장\n", change5000);
	printf("천원권: %d장\n", change1000);
	printf("오백원 동전: %d개\n", change500);
	printf("백원 동전: %d개\n", change100);

	return 0;
}