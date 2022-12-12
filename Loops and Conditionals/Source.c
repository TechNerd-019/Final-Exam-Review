#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int varNum = 3;
	int count = 0;

	while (varNum != 10)
	{
		varNum++;
		count++;
		printf("The number now is %d. Loop executed %d times.\n", varNum, count);
	}

	if (varNum == 10)
	{
		puts("Program is done executing.");
		exit(EXIT_SUCCESS);
	}
	else
	{
		puts("Program has not executed correctly.");
		exit(EXIT_FAILURE);
	}
	return 0;
}