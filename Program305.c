#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node * next;
	struct node * prev; 					// +
}; // End of switch

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
	PNODE newn = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	newn -> data = No;
	newn -> next = NULL;
	newn -> prev = NULL;					// +
	
	if(*Head == NULL)						// Linked List is Empty
	{
		*Head = newn;
	}
	else									// Linked List contains atleast one node
	{
		newn -> next = *Head;
		(*Head) -> prev = newn;				// +
		*Head = newn;
	}
} // End of InsertFirst

void InsertLast(PPNODE Head, int No)
{
	PNODE newn = NULL;
	PNODE temp = *Head;
	
	newn = (PNODE)malloc(sizeof(NODE));
	newn -> data = No;
	newn -> next = NULL;
	newn -> prev = NULL;					// +
	
	if(*Head == NULL)						// Linked List is Empty
	{
		*Head = newn;
	}
	else									// Linked List contains atleast one node
	{
		while(temp -> next != NULL)
		{
			temp = temp -> next;
		}
		temp -> next = newn;
		newn -> prev = temp;				// +
	}
} // End of InsertLast

void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("|%d|<=>",Head -> data);
		Head = Head -> next;
	}
	printf("NULL\n");
} // End of Display

int Count(PNODE Head)
{
	int iCnt = 0;
	while(Head != NULL)
	{
		iCnt++;
		Head = Head -> next;
	}
	return iCnt;
} // End of Count

void DeleteFirst(PPNODE Head)
{
	if(*Head == NULL)						// Empty LL
	{
		return;
	}
	else if((*Head) -> next == NULL)  		// Single Node
	{
		free(*Head);
		*Head = NULL;
	}
	else									// More than One Node
	{
		*Head = (*Head) -> next;
		free((*Head) -> prev);				// +
		(*Head) -> prev = NULL;				// +
	}
} // End of DeleteFirst

void DeleteLast(PPNODE Head)
{
	PNODE temp = *Head;
	if(*Head == NULL)						// Empty LL
	{
		return;
	}
	else if((*Head) -> next == NULL)  		// Single Node
	{
		free(*Head);
		*Head = NULL;
	}
	else									// More than One Node
	{
		while(temp -> next -> next != NULL)
		{
			temp = temp -> next;
		}
		free(temp -> next);
		temp -> next = NULL;
	}
} // End of DeleteLast

void InsertAtPosition(PPNODE Head, int No, int iPos)
{
	int iSize = 0, i = 0;
	PNODE newn = NULL;
	PNODE temp = *Head;
	
	iSize = Count(*Head);
	
	if((iPos < 1) || (iPos > iSize + 1))
	{
		return;
	}
	if(iPos == 1)
	{
		InsertFirst(Head, No);
	}
	else if(iPos == iSize + 1)
	{
		InsertLast(Head, No);
	}
	else
	{
		newn = (PNODE)malloc(sizeof(NODE));
		newn -> data = No;
		newn -> next = NULL;
		newn -> prev = NULL;
		
		for(i = 1; i < iPos - 1; i++)
		{
			temp = temp -> next;
		}
		newn -> next = temp -> next;
		temp -> next -> prev = newn;   		// +
		temp -> next = newn;
		newn -> prev = temp;				// +
	}
} // End of InsertAtPosition

void DeleteAtPosition(PPNODE Head, int iPos)
{
	int iSize = 0, i = 0;
	PNODE temp = *Head;
	
	iSize = Count(*Head);
	
	if((iPos < 1) || (iPos > iSize))
	{
		return;
	}
	
	if(iPos == 1)
	{
		DeleteFirst(Head);
	}
	else if(iPos == iSize)
	{
		DeleteLast(Head);
	}
	else
	{
		for(i= 1; i < iPos - 1; i++)
		{
			temp = temp -> next;
		}
		temp -> next = temp -> next -> next;
		free(temp -> next -> prev);
		temp -> next -> prev = temp;
	}
}

int main()
{
	PNODE First = NULL;
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
				InsertFirst(&First, iValue);
				break;
			
			case 2:
				printf("Enter Data to Insert \n");
				scanf("%d", &iValue);
				InsertLast(&First, iValue);
				break;
				
			case 3:
				printf("Enter Data to Insert \n");
				scanf("%d", &iValue);
				
				printf("Enter Position\n");
				scanf("%d",&iPos);
				
				InsertAtPosition(&First, iValue, iPos);
				break;
				
			case 4:
				DeleteFirst(&First);
				break;
				
			case 5:
				DeleteLast(&First);
				break;
				
			case 6:
				printf("Enter Position\n");
				scanf("%d",&iPos);
				
				DeleteAtPosition(&First, iPos);
				break;
				
			case 7:
				printf("Contents of Linked List are\n");
				Display(First);
				break;
				
			case 8:
				iRet = Count(First);
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
} // End of main