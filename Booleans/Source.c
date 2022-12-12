#include <stdio.h>
#include <stdbool.h>

int main(void)
{

	bool status;
	int varNum;
	bool isRunning = true;

	do {
		printf("Is it Christmas yet? ");
		if (scanf_s("%d", &varNum) == 1)
		{
			if (varNum == 1)
			{
				status = true;
				printf("Boolean is %d\n", status);

			}
			else if (varNum == 0)
			{
				status = false;
				printf("Boolean is %d\n", status);
			}
			else
			{
				puts("Invalid input.");
				isRunning = false;
			}
		}
	} while (isRunning == true);

	return 0;
}