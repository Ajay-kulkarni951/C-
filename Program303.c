#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
	PNODE newn = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn -> data = no;
	newn -> next = NULL;
	
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn -> next = *Head;
		*Head = newn;
	}
}

void InsertLast(PPNODE Head, int no)
{
	PNODE newn = NULL;
	PNODE temp = *Head;
	
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn -> data = no;
	newn -> next = NULL;
	
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		while(temp -> next != NULL)
		{
			temp = temp -> next;
		}
		temp -> next = newn;
	}
}

void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("|%d|->",Head -> data);
		Head = Head -> next;
	}
	
	printf("NULL\n");
}

int Count(PNODE Head)
{
	int iCnt = 0;
	
	while(Head != NULL)
	{
		iCnt++;
		Head = Head -> next;
	}
	
	return iCnt;
}

int main()
{
	PNODE First = NULL;
	int iRet = 0, iOption = 1, iValue = 0;
	
	while(iOption != 0)
	{
		printf("\n__________________________________________\n");
		printf("Enter your action on Linked List\n");
		printf("1. Insert Node at First Position\n");
		printf("2. Insert Node at Last Position\n");
		printf("3. Insert Node at Given Position\n");
		printf("4. Delete First Node\n");
		printf("5. Delete Last Node\n");
		printf("6. Delete Node at Given Position\n");
		printf("7. Display the Contents of Linked List\n");
		printf("8. Count Number of Nodes of Linked List\n");
		printf("0. Exit the Application\n");
		printf("\n__________________________________________\n");
		scanf("%d",&iOption);
		
		switch(iOption)
		{
			case 1:
				printf("Enter Data to Insert : \n");
				scanf("%d",&iValue);
				InsertFirst(&First,iValue);
				break;
				
			case 2:
				printf("Enter Data to Insert : \n");
				scanf("%d",&iValue);
				InsertLast(&First,iValue);
				break;
					
			case 7:
				printf("Nodes of Linked List are : \n");
				Display(First);
				break;

			case 8:
				iRet = Count(First);
				printf("Number of Nodes are : %d\n",iRet);
				break;
				
			case 0:
				printf("Thank You for using Marvellous Linked List Application \n");
				break;
				
			default:
				printf("Please Enter Valid Option \n");
				break;
		}// End of switch
	}// End of while
					
	return 0;
}// End of main