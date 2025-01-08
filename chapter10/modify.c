#include <stdio.h>
#define SIZE 7

void modify_array(int a[], int size); //원형 정의. 배열 매개변수 크기 적을 필요x
void print_array(int a[], int size);

int main(void)
{
    int list[SIZE] = { 1, 2, 3, 4, 5, 6, 7 };
    print_array(list, SIZE);
    modify_array(list, SIZE);
    print_array(list, SIZE);
}

void modify_array(int a[], int size)
{
    for (int i = 0; i < size; i++)
        ++a[i];
}

void print_array(int a[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%3d", a[i]);
    printf("\n");
}