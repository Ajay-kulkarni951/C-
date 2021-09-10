// 1. Write a program which search first occurrence of particular element from 
// singly linear linked list. 
// Function should return position at which element is found. 
// Function Prototype : 
// int SearchFirstOcc( PNODE Head , int no ); 
// Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70| 
// Input element : 30 
// Output : 3 

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

int SearchFirstOcc(PNODE Head, int no)
{
	int i = 0;
	while(Head != NULL) 
	{
		if(no == Head -> Data)
		{
			break;
		}
		Head = Head -> Next;
		i++;
	}
	return i + 1;
}

int main()
{
	PNODE First = NULL;
	int iValue = 0, ret = 0;
	
	InsertFirst(&First, 70); 
	InsertFirst(&First, 30);
	InsertFirst(&First, 50);
	InsertFirst(&First, 40); 
	InsertFirst(&First, 30); 
	InsertFirst(&First, 20); 
	InsertFirst(&First, 10); 
	Display(First);
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	ret = SearchFirstOcc(First, iValue);
	
	printf("Element first occured at position %d",ret);
	
	return 0;
}