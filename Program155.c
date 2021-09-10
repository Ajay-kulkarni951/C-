// 5. Write a program which return smallest element from singly linear linked 
// list. 
// Function Prototype : 
// int Minimum( PNODE Head); 
// Input linked list : |110|->|230|->|20|->|240|->|640| 
// Output : 20

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

void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("|%d|->\t",Head -> Data);
		Head = Head -> Next;
	}
	printf("NULL");
	printf("\n");
}

int Minimum(PNODE Head)
{
	int Min = 0;
	Min = Head -> Data;
	while(Head != NULL)
	{
		
		if(Min > (Head -> Data))
		{
			Min = Head -> Data;
		}
		Head = Head -> Next;
	}
	return Min;
}

int main()
{
	PNODE First = NULL;
	int ret = 0;
	
	InsertFirst(&First, 70); 
	InsertFirst(&First, 30);
	InsertFirst(&First, 50);
	InsertFirst(&First, 40); 
	InsertFirst(&First, 30); 
	InsertFirst(&First, 20); 
	InsertFirst(&First, 10); 
	Display(First);
	
	ret = Minimum(First);
	
	printf("Minimum number is %d",ret);
	return 0;
}
