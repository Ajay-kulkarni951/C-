// 4. Write a program which display smallest digits of all element from singly 
// linear linked list. 
// Function Prototype : 
// void DisplaySmall( PNODE Head); 
// Input linked list : |11|->|250|->|532|->|415| 
// Output : 1 0 2 1

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

void DisplaySmall(PNODE Head)
{
	int rem, min = 9;
	printf("Palindrome Numbers are: ");
	while(Head != NULL)
	{
		while((Head -> Data) != 0)
		{
			rem = Head -> Data % 10;
			if(min > rem)
			{
				min = rem;
			}
			Head -> Data = Head -> Data / 10;
		}
		printf("%d ",min);
		rem = 0;
		min = 9;
		Head = Head -> Next;
	}
}		
int main()
{
	PNODE First = NULL;
	InsertFirst(&First,415);
	InsertFirst(&First,532);
	InsertFirst(&First,250);
	InsertFirst(&First,11);
	DisplaySmall(First);
	
	return 0;
}