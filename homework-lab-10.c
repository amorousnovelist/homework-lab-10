#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int area_square(int size);
void draw_square(int size);
void square_definition();

int area_square(int size)
{
	return size * size;
}
void draw_square(int size)
{
	for (int i = 1; i <= size; i++) {
		for (int j = 1; j <= size; j++)
			printf("*");
		printf("\n");
	}
}
void square_definition()
{
	puts("���������� ��������������� � ��� �������");
}
void main()
{
	system("chcp 1251");
	int choose;
	puts("���������� ���������������");
	printf("1) ��������� ������� ������\n2) ������� ����������� ������\n3) ���������� ������\n�������� ��������: ");
	scanf("%d", &choose);
	switch (choose)
	{
	case 1: {
		int side;
		printf("������� �������� ������� ����������� ����������������: ");
		scanf("%d", &side);
		printf("������� ����������� ���������������� ����� %d\n", area_square(side));
		break;
	}
	case 2: {
		square_definition();
		break;
	}
	case 3: {
		int side;
		printf("������� �������� ������� ����������� ����������������: ");
		scanf("%d", &side);
		draw_square(side);
		break;
	}
	default: printf("������� �������������� ��������: %d. ���������� ������\n", choose);
	}
}