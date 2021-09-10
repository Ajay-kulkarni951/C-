// 3. Write a program which returns addition of all element from singly linear 
// linked list. 
// Function Prototype : 
// int Addition( PNODE Head); 
// Input linked list : |10|->|20|->|30|->|40| 
// Output : 100 

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

int Addition(PNODE Head)
{
	int Add = 0; 
	while(Head != NULL)
	{
		Add = Add + Head -> Data;
		Head = Head -> Next;
	}
	return Add;
}

int main()
{
	PNODE First = NULL;
	int ret = 0;
	
	InsertFirst(&First, 40); 
	InsertFirst(&First, 30); 
	InsertFirst(&First, 20); 
	InsertFirst(&First, 10); 
	Display(First);
	
	ret = Addition(First);
	
	printf("Addition is %d",ret);
	
	return 0;
}