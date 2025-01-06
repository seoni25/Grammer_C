#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double radius;

	printf("반지름을 입력하시오: ");
	scanf("%lf", &radius);

	printf("원의 면적: %lf", radius*radius*3.14);
}