#define _CRT_SECURE_NO_WARNINGS
#define MAXLENGTH              4
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct milk
{
	char type[25];
	char brand[25];
}MILK;

void initializeArray(MILK*, int);
void addMilk(MILK*, char[], char[]);
void removeMilk(MILK*, char[], char[]);
void printMilk(MILK[], int);

int main(void)
{
	MILK stock[MAXLENGTH];
    int size = MAXLENGTH;

	for (int i = 0; i < size; i++)
	{
		initializeArray(&stock[i], size);
	}

	char milk1[] = { "Almond" };
	char milk2[] = { "Soy" };
	char milk3[] = { "Cow" };

	char milk1Brand[] = { "Silk" };
	char milk2Brand[] = { "Kirkland" };
	char milk3Brand[] = { "Lala" };

	addMilk(&stock[0], milk1, milk1Brand);
	addMilk(&stock[1], milk2, milk2Brand);
	addMilk(&stock[2], milk3, milk3Brand);

	removeMilk(&stock[0], milk1, milk1Brand);
	printMilk(stock, size);
	return 0;
}

void initializeArray(MILK* stock, int size)
{
	strncpy(stock->type, " ", 2);
	strncpy(stock->brand, " ", 2);
	return;
}

void addMilk(MILK* selectedStock, char selectedMilk[], char selectedMilkBrand[])
{
	strcpy(selectedStock->type, selectedMilk);
	strcpy(selectedStock->brand, selectedMilkBrand);
	return;
}

void removeMilk(MILK* selectedStock, char selectedMilk[], char selectedMilkBrand[])
{
	strncpy(selectedStock->type," ", 2);
	strncpy(selectedStock->brand," ", 2);
	return;
}

void printMilk(MILK stock[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%s", stock[i].type);
		puts("");
		printf("%s", stock[i].brand);
		puts("");
	}
	return;
}