#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	double w;
	double h;
	double area;
	double perimeter;

	printf("가로의 길이:");
	scanf("%lf", &w);

	printf("세로의 길이:");
	scanf("%lf", &h);

	area = w * h;
	perimeter = 2 * (w + h);

	printf("사각형의 넓이: %lf\n", area);
	printf("사각형의 둘레: %lf\n", perimeter);

	return 0;
}