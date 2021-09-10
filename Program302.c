#include<stdio.h>
#include<stdlib.h>

struct node
{
	int Data;
	struct node *Next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
	PNODE newn = NULL;

	newn = (PNODE)malloc(sizeof(NODE));
	newn -> Data = No;
	newn -> Next = NULL;

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

void InsertLast(PPNODE Head, int No)
{
	PNODE newn = NULL;
	PNODE temp = *Head;

	newn = (PNODE)malloc(sizeof(NODE));
	newn -> Data = No;
	newn -> Next = NULL;

	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		while(temp -> Next != NULL)
		{
			temp = temp -> Next;
		}
		temp -> Next = newn;
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

int Count(PNODE Head)
{
	int icnt = 0;
	while(Head != NULL)
	{
		icnt++;
		Head = Head -> Next;
	}
	return icnt;
}

void DeleteFirst(PPNODE Head)
{
	PNODE Temp = *Head;
	if(*Head == NULL)						// If LL is empty
	{
		return;
	}
	else if((*Head) -> Next == NULL)		// If LL contains single node
	{
		free(*Head);						// Delete that first node
		*Head = NULL;						// Set NULL into First pointer
	}
	else									// If LL contains more than one node
	{
		(*Head) = (*Head) -> Next;
		free(Temp);
	}
}

void DeleteLast(PPNODE Head)
{
	PNODE Temp = *Head;
	if(*Head == NULL)						// If LL is empty
	{
		return;
	}
	else if((*Head) -> Next == NULL)		// If LL contains single node
	{
		free(*Head);						// Delete that first node
		*Head = NULL;						// Set NULL into First pointer
	}
	else									// If LL contains more than one node
	{
		while(Temp -> Next -> Next != NULL)
		{
			Temp = Temp -> Next;
		}
		
		free(Temp -> Next);
		
		Temp -> Next = NULL;
	}
}


int main()
{
	PNODE First = NULL;
	int iRet = 0;

	InsertFirst(&First,51);
	InsertFirst(&First,21);
	InsertFirst(&First,11);
	InsertLast(&First,101);
	InsertLast(&First,111);
	printf("Actual Nodes\n");
	Display(First);
	DeleteFirst(&First);
	printf("Nodes after delete first\n");
	Display(First);
	DeleteLast(&First);
	printf("Nodes after delete last\n");
	Display(First);
	
	iRet = Count(First);
	printf("Number of nodes are : %d\n",iRet);

	return 0;
}