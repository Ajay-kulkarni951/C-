#include<string.h>
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node * next, * prev;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int no)
{
	PNODE newn = NULL;

	newn = (PNODE)malloc(sizeof(NODE));

	newn -> data = no;
	newn -> next = NULL;
	newn -> prev = NULL;

	if((*Head == NULL) && (*Tail == NULL))
	{
		*Head = newn;
		*Tail = newn;
		(*Tail) -> next = *Head;
		(*Head) -> prev = *Tail;
	}
	else
	{
		newn -> next = *Head;
		*Head -> prev = newn;
		*Head = newn;
		(*Tail) -> next = *Head;
		(*Head) -> prev = *Tail;
	}
}

void InsertLast(PPNODE Head, PPNODE Tail, int no)
{
	PNODE newn = NULL;

	newn = (PNODE)malloc(sizeof(NODE));

	newn -> data = no;
	newn -> next = NULL;
	newn -> prev = NULL;

	if((*Head == NULL) && (*Tail == NULL))
	{
		*Head = newn;
		*Tail = newn;
		(*Tail) -> next = *Head;
		(*Head) -> prev = *Tail;
	}
	else
	{
		(*Tail) -> next = newn;
		newn -> prev = *Tail;
		*Tail = newn;
		(*Tail) -> next = *Head;
		(*Head) -> prev = *Tail;
	}
}

void Display(PNODE Head, PNODE Tail)
{
	PNODE temp = Head;

	while(temp != Tail -> next)
	{
		printf("%d",temp -> data);
		temp = temp -> next;
	}
}

int Count(PNODE Head, PNODE Tail)
{
	int count = 0;
	PNODE temp = Head;

	while(temp != Tail -> next)
	{
		count++;
		temp = temp -> next;
	}
	return count;
}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{
	PNODE temp = *Head;
	if((*Head == NULL) && (*Tail == NULL))
	{
		return;
	}
	else if(*Head == *Tail)
	{
		free(*Head);
		*Head = NULL;
		*Tail = NULL;
	}
	else 
	{
		*Head = (*Head) -> next;
		(*Tail) -> next = *Head;
		(*Head) -> prev = *Tail
		free(temp);
	}
}

void DeleteLast(PPNODE Head, PPNODE Tail)
{
	PNODE temp = *Tail;
	
	if((*Head == NULL) && (*Tail == NULL))
	{
		return;
	}
	else if(*Head == *Tail)
	{
		free(*Tail);
		*Head = NULL:
		*Tail = NULL;
	}
	else
	{
		*Tail = (*Tail) -> prev;
		(*Tail) -> next = *Head;
		(*Head) -> prev = *Tail;
		free(temp);
	}
}

void InsertAtPosition(PPNODE Head, PPNODE Tail, int no, int iPos)
{
	int iSize = Count(*Head,*Tail);
	int i = 0;
	
	if(iPos < 1) || (iPos > iSize + 1)) 
	{
		return;
	}
	if(iPos == 1)
	{
		InsertFirst(Head,Tail,no);
	}
	else if(iPos == iSize + 1)
	{
		InsertLast(Head,Tail,no);
	}
	else
	{
		PNODE temp = *Head;
		PNODE newn = NULL;
		
		newn = (PNODE)malloc(sizeof(NODE));
		newn -> data = no;
		newn -> next = NULL;
		newn -> prev = NULL;
		
		for(i = 1; i < iPos - 1; i++)
		{
			temp = temp -> next;
		}
		newn -> next = temp -> next;
		temp -> next -> prev = newn;
		temp -> next = newn;
		newn -> prev = temp;
	}
}

void DeleteAtPosition(PPNODE Head,PPNODE Tail,int iPos)
{
	int iSize = Count(*Head,*Tail);
	int i = 0;
	
	if(iPos < 1) || (iPos > iSize)) 
	{
		return;
	}
	if(iPos == 1)
	{
		DeleteFirst(Head,Tail);
	}
	else if(iPos == iSize)
	{
		DeleteLast(Head,Tail);
	}
	else
	{
		PNODE temp = *Head;
		PNODE target = NULL;
		for(i = 1; i < iPos - 1; i++)
		{
			temp = temp -> next;
		}
		target = temp -> next;
		temp -> next = target -> next;
		target -> next -> prev = temp;
		free(target);
	}
}

int main()
{
	PNODE First = NULL,Last = NULL;
	int iChoice = 1, iPos = , iNo = 0, iRet = 0;
	
	while(iChoice != 0)
	{
		printf("--------------------------------------------------------\n");
		printf("Enter Your Choice From Below Options.\n");
		printf("0. Exit The Appliaction.\n");
		printf("1. Insert Node At First Position.\n");
		printf("2. Insert Node At Last Position.\n");
		printf("3. Insert Node At Given Position.\n");
		printf("4. Delete Node From First Position.\n");
		printf("5. Delete Node From Last Position.\n");
		printf("6. Delete Node From Given Position.\n");
		printf("7. Display All Nodes From Linked List.\n");
		printf("8. Count Total Number Of Nodes From Linked List\n");
		scanf("%d",&iChoice);
		printf("--------------------------------------------------------\n");
		
		switch(iChoice)
		{
			case 1:
				printf("Enter Number\n");
				scanf("%d",&iNo);
				InsertFirst(&First,&Last,iNo);
				break;
				
			case 2:
				printf("Enter Number\n");
				scanf("%d",&iNo);
				InsertLast(&First,&Last,iNo);
				break;
				
			case 3:
				printf("Enter Number\n");
				scanf("%d",&iNo);
				printf("Enter Position\n");
				scanf("%d",&iPos);
				InsertAtPosition(&First,&Last,iNo,iPos);
				break;
				
			case 4:
				DeleteFirst(&First,&Last);
				break;
				
			case 5:
				DeleteLast(&First,&Last);
				break;
				
			case 6:
				printf("Enter Position\n");
				scanf("%d",&iPos);
				DeleteAtPosition(&First,&Last,iPos);
				break;
				
			case 7:
				Display(First,Last);
				break;
				
			case 8:
				iRet = Count(First,Last);
				printf("Total Numbers of Nodes are : %d\n",iRet);
				break;
				
			case 0:
				printf("Thank You For Using Doubly Circular Linked List Appliactio\n");
				break;
				
			default:
				printf("Please Enter Proper Option\n");
				break;
		}
	}
	return 0;
}