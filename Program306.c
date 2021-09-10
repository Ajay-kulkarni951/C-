#include<stdio.h>
#include<stdlib.h>

struct node
{
	int Data;
	struct node * Next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

void InsertFirst(PPNODE Head, PPNODE Tail, int data)
{
	PNODE Newn = NULL;
	
	Newn = (PNODE)malloc(sizeof(NODE));
	Newn -> Data = data;
	Newn -> Next = NULL;
	
	if((*Head == NULL) && (*Tail == NULL))
	{
		*Head = Newn;
		*Tail = Newn;
		(*Tail) -> Next = *Head;
	}
	else
	{
		Newn -> Next = *Head;
		*Head = Newn;
		(*Tail) -> Next = Newn;
	}
}

void Display(PNODE Head, PNODE Tail)
{
	do
	{
		printf("|%d| -> ",Head -> Data);
		Head = Head -> Next;
	}while(Head != Tail -> Next);
}

void InsertLast(PPNODE Head, PPNODE Tail, int no)
{
	PNODE Newn = NULL;
	
	Newn = (PNODE)malloc(sizeof(NODE));
	Newn -> Data = no;
	Newn -> Next = NULL;
	
	if((NULL == *Head) && (*Tail == NULL))
	{
		*Head = Newn;
		*Tail = Newn;
		(*Tail) -> Next = *Head;
	}
	else
	{
		(*Tail) -> Next = Newn;
		*Tail = Newn;
		(*Tail) -> Next = *Head;
	}
}

int Count(PNODE Head, PNODE Tail)
{
	int Count = 0;
	do
	{
		Count++;
		Head = Head -> Next;
	}while(Head != Tail -> Next);
	return Count;
}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{
	PNODE Temp = *Head;
	if(*Head == NULL)
	{
		return;
	}
	else
	{
		(*Head) = Temp -> Next;
		free(Temp);
	}
}

void DeleteLast(PPNODE Head, PPNODE Tail)
{
	PNODE Temp1,Temp2;
	Temp1 = *Head;
	Temp2 = *Tail;
	
	if((*Head == NULL) && (*Tail == NULL))
	{
		return;
	}
	else
	{
		while(Temp1 -> Next != Temp2)
		{
			Temp1 = Temp1 -> Next;
		}
		free(Temp2);
		*Tail = Temp1;
		Temp1 -> Next = *Head;
	}
}

void InsertAtPosition(PPNODE Head, PPNODE Tail, int iNo, int iPos)
{
	int i = 0;
	PNODE Temp = NULL, Newn = NULL;
	int iSize = Count(*Head,*Tail);
	
	if((iPos < 1) || (iPos > iSize + 1))
	{
		return;
	}
	if(iPos == 1)
	{
		InsertFirst(Head, Tail, iNo);
	}
	else if(iPos == iSize + 1)
	{
		InsertLast(Head, Tail, iNo);
	}
	else
	{
		Temp = *Head;
		Newn = (PNODE)malloc(sizeof(NODE));
		
		Newn -> Data = iNo;
		Newn -> Next = NULL;
		
		for(i = 1; i < iPos - 1; i++)
		{
			Temp = Temp -> Next;
		}
		Newn -> Next = Temp -> Next;
		Temp -> Next = Newn;
		(*Tail) -> Next = *Head;
	}
}
	
void DeleteAtPosition(PPNODE Head, PPNODE Tail, int iPos)
{
	int i = 0;
	PNODE Temp = *Head;
	PNODE Target = NULL;
	int iSize = Count(*Head,*Tail);
	
	if((iPos < 1) || (iPos > iSize))
	{
		return;
	}
	if(iPos == 1)
	{
		DeleteFirst(Head, Tail);
	}
	else if(iPos == iSize)
	{
		DeleteLast(Head, Tail);
	}
	else
	{
		for(i = 1; i < iPos - 1; i++)
		{
			Temp = Temp -> Next;
		}
		Target = Temp -> Next;
		Temp -> Next = Target -> Next;
		free(Target);
		(*Tail) -> Next = *Head;
	}
}

int main()
{
	PNODE First = NULL, Last = NULL;
	int iOption = 1, iValue = 0, iPos = 0, iRet = 0;
	
	while(iOption != 0)
	{
		printf("\n****************************************************************\n");
		printf("Please Select the Option\n");
		printf("1. Insert the Node at First Position \n");
		printf("2. Insert the Node at Last Position \n");
		printf("3. Insert the Node at Given Position \n");
		printf("4. Delete the First Node \n");
		printf("5. Delete the Last Node \n");
		printf("6. Delete the Node at Given Position \n");
		printf("7. Display the Contents of Linked List \n");
		printf("8. Count the Nodes of Linked List \n");
		printf("0. Exit the Application \n");
		scanf("%d",&iOption);
		printf("\n****************************************************************\n");
		
		switch(iOption)
		{
			case 1:
				printf("Enter Data to Insert \n");
				scanf("%d", &iValue);
				InsertFirst(&First, &Last, iValue);
				break;
			
			case 2:
				printf("Enter Data to Insert \n");
				scanf("%d", &iValue);
				InsertLast(&First, &Last, iValue);
				break;
				
			case 3:
				printf("Enter Data to Insert \n");
				scanf("%d", &iValue);
				
				printf("Enter Position\n");
				scanf("%d",&iPos);
				
				InsertAtPosition(&First, &Last, iValue, iPos);
				break;
				
			case 4:
				DeleteFirst(&First, &Last);
				break;
				
			case 5:
				DeleteLast(&First, &Last);
				break;
				
			case 6:
				printf("Enter Position\n");
				scanf("%d",&iPos);
				
				DeleteAtPosition(&First, &Last, iPos);
				break;
				
			case 7:
				printf("Contents of Linked List are\n");
				Display(First, Last);
				break;
				
			case 8:
				iRet = Count(First, Last);
				printf("Number of Nodes are %d\n",iRet);
				break;
				
			case 0:
				printf("Thank You for Using Linked List Application\n"); 
				break;
				
			default:
				printf("Please Enter Proper Option\n");
				break;
				
		} // End of switch
	} // End of while 
	return 0;
}