// 1. Write a program which reverse each element of singly linked list. 
// Function Prototype : 
// void Reverse( PNODE Head); 
// Input linked list : |11|->|28|->|17|->|41|->|6|->|89| 
// Output : |11|->|82|->|71|->|14|->|6|->|98|

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0


struct node
{
	int Data;
	struct node * Next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
	PNODE newn = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn -> Next = NULL;
	newn -> Data = no;
	
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn -> Next = *Head;
		*Head = newn;
	}
}

void Reverse(PNODE Head)
{
	int add = 0, rem;
	while(Head != NULL)
	{
		while((Head -> Data) != 0)
		{
			rem = Head -> Data % 10;
			if(rem != 0)
			{
				add = add * 10 + rem;
			}
			Head -> Data = Head -> Data / 10;
		}
		printf("%d -> ",add);
		add = 0;
		rem = 0;
		Head = Head -> Next;
	}
	printf("NULL");
}
		
int main()
{
	PNODE First = NULL;
	InsertFirst(&First,89);
	InsertFirst(&First,6);
	InsertFirst(&First,41);
	InsertFirst(&First,17);
	InsertFirst(&First,28);
	InsertFirst(&First,11);
	Reverse(First);
	return 0;
}