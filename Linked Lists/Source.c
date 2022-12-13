#include <stdio.h>
#include <stdlib.h>


typedef struct list
{
	int num;
	struct listnode* next;
}LIST, *PLIST;

void addItemToList(PLIST*, int);
void removeItem(PLIST*, int);
void printList(PLIST);

int main(void)
{

	PLIST list = NULL;
	int num = 23;
	int num2 = 45;
	int num3 = 67;
	addItemToList(&list, num);
	addItemToList(&list, num2);

	removeItem(&list, num);
	removeItem(&list, num3);

	printList(list);

	return 0;
}

void addItemToList(PLIST* list, int num)
{
	PLIST node = NULL;
	node = (PLIST)malloc(sizeof(LIST));
	if (!node)
	{
		fprintf(stderr, "Error allocating to memory.");
		exit(EXIT_FAILURE);
	}
	node->num = num;
	node->next = *list;
	*list = node;
}

void removeItem(PLIST* list, int num)
{
	PLIST current = *list;
	if (current->num == num)
	{
		if (current->next != NULL)
		{
			*list = current->next;
		}
		else
		{
			*list = NULL;
		}
		puts("Node deleted.");
		free(current);
		return;
	}

	PLIST search = NULL;
	while (current != NULL && current->num != num)
	{
		search = current;
		current = current->next;
	}
	if (current == NULL)
	{
		puts("Node with num does not exist.");
		return;
	}
	search->next = current->next;
	puts("Node with num deleted.");
	free(current);
	return;
}


void printList(PLIST list)
{
	PLIST current = list;
	if (!current)
	{
		puts("Empty list");
		return;
	}
	do
	{
		printf("%d\n", current->num);
		current = current->next;
	} while (current != NULL);

}