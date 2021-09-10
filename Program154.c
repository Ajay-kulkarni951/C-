// 4. Write a program which return largest element from singly linear linked 
// list. 
// Function Prototype : 
// int Maximum( PNODE Head); 
// Input linked list : |110|->|230|->|320|->|240| 
// Output : 320 

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

int Maximum(PNODE Head)
{
	int Max = 0;
	Max = Head -> Data;
	while(Head != NULL)
	{
		
		if(Max < (Head -> Data))
		{
			Max = Head -> Data;
		}
		Head = Head -> Next;
	}
	return Max;
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
	
	ret = Maximum(First);
	
	printf("Maximum number is %d",ret);
	return 0;
}
