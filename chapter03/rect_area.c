#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	double w;
	double h;
	double area;
	double perimeter;

	printf("������ ����:");
	scanf("%lf", &w);

	printf("������ ����:");
	scanf("%lf", &h);

	area = w * h;
	perimeter = 2 * (w + h);

	printf("�簢���� ����: %lf\n", area);
	printf("�簢���� �ѷ�: %lf\n", perimeter);

	return 0;
}