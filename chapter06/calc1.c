#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	int num1;
	int num2;
	char op;
	int result;

	printf("������ �Է��Ͻÿ�(��: 2 + 5)\n>>");
	scanf("%d%c%d", &num1, &op, &num2);
	
	if (op == '+')
		result = num1 + num2;
	else if (op == '-')
		result = num1 - num2;
	else if (op == '*')
		result = num1 * num2;
	else if (op == '/')
		result = num1 / num2;
	else if (op == '%')
		result = num1 % num2;
	else {
		printf("�������� �ʴ� �������Դϴ�.\n");
		return 0;
	}
	
	printf("%d %c %d = %d", num1, op, num2, result);


}