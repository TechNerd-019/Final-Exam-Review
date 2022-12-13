#include <stdio.h>
#include <string.h>

int main(void)
{
	char string[25] = { "Avatar: The Way of Water" };
	puts("Reversed:");
	for (int i = strlen(string); i >= 0; i--)
	{
		printf("%c", string[i]);
	}
	puts("");
	puts("Original:");
	for (int i = 0; i <= strlen(string); i++)
	{
		printf("%c", string[i]);
	}
	return 0;
};