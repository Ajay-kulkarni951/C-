// 3. Write a program which returns addition of all even element from singly 
// linear linked list. 
// Function Prototype : 
// int AdditionEven( PNODE Head); 
// Input linked list : |11|->|20|->|32|->|41| 
// Output : 52

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

int AdditionEven( PNODE Head)
{
	int Add = 0;
	while(Head != NULL)
	{
		if((Head -> Data) % 2 == 0)
		{
			Add = Add + Head -> Data;
		}
		Head = Head -> Next;
	}
	return Add;
}
			
int main()
{
	PNODE First = NULL;
	int ret = 0;
	
	InsertFirst(&First,41);
	InsertFirst(&First,32);
	InsertFirst(&First,20);
	InsertFirst(&First,11);
	
	ret = AdditionEven(First);
	printf("Addition of even elements is %d",ret);
	
	return 0;
}