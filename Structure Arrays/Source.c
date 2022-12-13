#include <stdio.h>
#include <stdbool.h>

typedef struct milk
{
	char type[25];
	char brand[25];
}MILK;

void addMilk(MILK*, char[], char[]);
void removeMilk(MILK*, char[], char[]);
void printMilk(MILK[]);

int main(void)
{
	MILK stock[4];
	char milk1[] = {"Almond"};
	char milk2[] = {"Soy"};
	char milk3[] = {"Cow"};

	char milk1Brand[] = {"Silk"};
	char milk2Brand[] = {"Kirkland"};
	char milk3Brand[] = {"Lala"};

	addMilk(&stock[0], &milk1, &milk1Brand);
	addMilk(&stock[1], &milk2, &milk2Brand);
	addMilk(&stock[2], &milk3, &milk3Brand);

	removeMilk(&stock[0], &milk1, &milk1Brand);
	printMilk(stock);
	return 0;
}

void addMilk(MILK* selectedStock, char selectedMilk[], char selectedMilkBrand[])
{
	*(selectedStock)->type = selectedMilk;
	*(selectedStock)->brand = selectedMilkBrand;
	return;
}

void removeMilk(MILK* selectedStock, char selectedMilk[], char selectedMilkBrand[])
{
	*(selectedStock)->type = '\0';
	*(selectedStock)->brand = '\0';
	return;
}

void printMilk(MILK stock[])
{
	for (int i = 0; i < 4; i++)
	{
		printf("%s", stock[i].type);
		puts("");
		printf("%s", stock[i].brand);
		puts("");
	}
	return;
}