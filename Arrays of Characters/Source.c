#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
	char name1[] = "Salah Salame";
	char name2[25] = { "Salah Salame" };

	for (int i = 0; i < strlen(name2); i++)
	{
		printf("%c", name2[i]);
	}
	puts("");
	bool IsIndexANum;
	char string[25] = { "This is a t3st" };

	for (int i = 0; i < strlen(string); i++)
	{
		if (isdigit(string[i]))
		{
			printf("Number found at index %d\n", i + 1);
			IsIndexANum = true;
			printf("Boolean returned %d\n", IsIndexANum);
		}
	}
	return 0;
}