#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	printf("This is an example using printf.\n");
	puts("This is an example using puts instead.");

	int varNum = 25;
	printf("%d is my number.\n", varNum);
	printf("Located at address %p\n", &varNum);

	printf("An int is %zd bytes long.", sizeof(int));

	return 0;
}
