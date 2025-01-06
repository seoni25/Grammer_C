#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double rate;//환율
	double usd; //달러화
	int krw; //원화

	printf("환율을 입력하시오: ");
	scanf("%lf", &rate);

	printf("원화 금액을 입력하시오: ");
	scanf("%d", &krw);

	usd = krw / rate;

	printf("원화 %d원은 %lf달러입니다.", krw, usd);
}