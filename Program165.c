// 5. Write a program which display largest digits of all element from singly 
// linear linked list. 
// Function Prototype : 
// void DisplayLarge( PNODE Head); 
// Input linked list : |11|->|250|->|532|->|419| 
// Output : 1 5 5 9

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

void DisplayLarge(PNODE Head)
{
	int rem, max = 0;
	printf("Palindrome Numbers are: ");
	while(Head != NULL)
	{
		while((Head -> Data) != 0)
		{
			rem = Head -> Data % 10;
			if(max < rem)
			{
				max = rem;
			}
			Head -> Data = Head -> Data / 10;
		}
		printf("%d ",max);
		rem = 0;
		max = 0;
		Head = Head -> Next;
	}
}		
int main()
{
	PNODE First = NULL;
	InsertFirst(&First,419);
	InsertFirst(&First,532);
	InsertFirst(&First,250);
	InsertFirst(&First,11);
	DisplayLarge(First);
	
	return 0;
}