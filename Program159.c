// 4. Write a program which return second maximum element from singly linear 
// linked list. 
// Function Prototype : 
// int SecMaximum( PNODE Head); 
// Input linked list : |110|->|230|->|320|->|240| 
// Output : 240 

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

int SecMaximum(PNODE Head)
{
	int max1,max2,i;
	
	if((Head -> Data) > ((Head -> Next) -> Data))
	{
		max1 = Head -> Data;
		max2 = (Head -> Next) -> Data;
	}
	else
	{
		max1 = (Head -> Next) -> Data;
		max2 = Head -> Data;
	}
	Head = Head -> Next -> Next;
	while(Head != NULL)
	{
		if(max1 < Head -> Data)
		{
			max2 = max1;
			max1 = Head -> Data;
		}
		else if(max2 < Head -> Data)
		{
			max2 = Head -> Data;
		}
		Head = Head -> Next;
	}
	return max2;

}
int main()
{
	PNODE First = NULL;
	int ret = 0;
	
	InsertFirst(&First,240);
	InsertFirst(&First,320);
	InsertFirst(&First,230);
	InsertFirst(&First,110);
	
	ret = SecMaximum(First);
	printf("Second Largest Element is %d",ret);
	
	return 0;
}