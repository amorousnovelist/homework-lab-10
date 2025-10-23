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
	puts("Ïðàâèëüíûé ÷åòûðåõóãîëüíèê — ýòî êâàäðàò");
}
void main()
{
	system("chcp 1251");
	int choose;
	puts("ÏÐÀÂÈËÜÍÛÉ ×ÅÒÛÐÅÕÓÃÎËÜÍÈÊ");
	printf("1) ðàñ÷èòàòü ïëîùàäü ôèãóðû\n2) âûâåñòè îïðåäåëåíèå ôèãóðû\n3) íàðèñîâàòü ôèãóðó\nÂÛÁÅÐÈÒÅ ÎÏÅÐÀÖÈÞ: ");
	scanf("%d", &choose);
	switch (choose)
	{
	case 1: {
		int side;
		printf("Ââåäèòå çíà÷åíèå ñòîðîíû ÏÐÀÂÈËÜÍÎÃÎ ×ÅÒÛÐÅÕÓÃÎËÜÍÈÊÀ: ");
		scanf("%d", &side);
		printf("Ïëîùàäü ÏÐÀÂÈËÜÍÎÃÎ ×ÅÒÛÐÅÕÓÃÎËÜÍÈÊÀ ðàâíà %d\n", area_square(side));
		break;
	}
	case 2: {
		square_definition();
		break;
	}
	case 3: {
		int side;
		printf("Ââåäèòå çíà÷åíèå ñòîðîíû ÏÐÀÂÈËÜÍÎÃÎ ×ÅÒÛÐÅÕÓÃÎËÜÍÈÊÀ: ");
		scanf("%d", &side);
		draw_square(side);
		break;
	}
	default: printf("ÂÂÅÄÅÍÀ ÍÅÑÓÙÅÑÒÂÓÞÙÀß ÎÏÅÐÀÖÈß: %d. Ïîïðîáóéòå çàíîâî\n", choose);
	}
}