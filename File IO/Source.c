#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	FILE* fp;
	if (argc != 2)
	{
		fprintf(stderr, "Missing text file as command line argument.");
		exit(EXIT_FAILURE);
	}
	if ((fp = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "Cannot open the file.");
		exit(EXIT_FAILURE);
	}
	char name[25] = { "Salah Salame" };
	fputs(name, fp);

	fclose(fp);
}