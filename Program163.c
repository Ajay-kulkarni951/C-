// 3. Write a program which display product of all digits of all element from 
// singly linear linked list. (Don’t consider 0) 
// Function Prototype : 
// void DisplayProduct( PNODE Head); 
// Input linked list : |11|->|20|->|32|->|41| 
// Output : 1 2 6 4

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

void DisplayProduct(PNODE Head)
{
	int mul = 1, rem;
	printf("Palindrome Numbers are: ");
	while(Head != NULL)
	{
		while((Head -> Data) != 0)
		{
			rem = Head -> Data % 10;
			if(rem != 0)
			{
				mul = mul * rem;
			}
			Head -> Data = Head -> Data / 10;
		}
		printf("%d ",mul);
		mul = 1;
		rem = 0;
		Head = Head -> Next;
	}
}		
int main()
{
	PNODE First = NULL;
	InsertFirst(&First,41);
	InsertFirst(&First,32);
	InsertFirst(&First,20);
	InsertFirst(&First,11);
	DisplayProduct(First);
	
	return 0;
}