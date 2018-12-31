#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void push(struct node **head_ref,int data)
{
	struct node *new = (struct node *)malloc(sizeof(struct node));

	new->data = data;
	new->next = *head_ref;

	*head_ref = new;
}

void printlist(struct node *node)
{
	//while(node != NULL)
	//{
		printf("%d\t", node->data);
		printf("\n");
	//	node = node->next;
	//}
}

void reverse_list(struct node *head_ref)
{
	struct node *current = head_ref;
	struct node *prev = NULL;
	struct node *next = NULL;

	while(current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head_ref = prev;
}


int main()
{
	struct node *first = (struct node*)malloc(sizeof(struct node));
	struct node *second = (struct node*)malloc(sizeof(struct node));
	struct node *third = (struct node*)malloc(sizeof(struct node));

	push(&first,1);
	push(&first,2);
	push(&first,3);

	printlist(first);

//	reverse_list(first);
//	printlist(first);

	return 0;
}


