// 5. Write a program which display addition of digits of element from singly 
// linear linked list. 
// Function Prototype :int SumDigit( PNODE Head); 
// Input linked list : |110|->|230|->|20|->|240|->|640| 
// Output : 2 5 2 6 10

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

struct node
{
	int Data;
	struct node *Next;
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

int SumDigit(PNODE Head)
{
	int Add = 0, rem;
	while(Head != NULL)
	{
		while((Head -> Data) > 0)
		{
			rem = (Head -> Data) % 10;
			Add = Add + rem;
			Head -> Data = (Head -> Data) / 10;
		}
		printf("%d\t",Add);
		Head = Head -> Next;
		Add = 0;
	}
	
}
int main()
{
	PNODE First = NULL;

	InsertFirst(&First,640);
	InsertFirst(&First,240);
	InsertFirst(&First,20);
	InsertFirst(&First,230);
	InsertFirst(&First,110);
	
	SumDigit(First);
	return 0;
} 