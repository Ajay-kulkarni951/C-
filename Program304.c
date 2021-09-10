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

void DeleteFirst(PPNODE Head)
{
	PNODE Temp = *Head;
	
	if(*Head == NULL)
	{
		return;
	}
	else if((*Head) -> next == NULL)
	{
		free(*Head);
		*Head = NULL;
	}
	else
	{
		*Head = (*Head) -> next;
		free(Temp);
	}
}

void DeleteLast(PPNODE Head)
{
	PNODE Temp = *Head;
	
	if(*Head == NULL)
	{
		return;
	}
	else if((*Head) -> next == NULL)
	{
		free(*Head);
		*Head = NULL;
	}
	else
	{
		while(Temp -> next -> next != NULL)
		{
			Temp = Temp -> next;
		}
		free(Temp -> next);
		Temp -> next = NULL;
	}
}

void InsertAtPosition(PPNODE Head, int no, int iPos)
{
	int iSize = 0, i = 0;
	PNODE newn = NULL;
	PNODE Temp = *Head;
	
	iSize = Count(*Head);
	
	if((iPos < 1) || (iPos > iSize + 1))		// Invalid Position
	{
		return;
	}
	if(iPos == 1)								// First Position
	{
		InsertFirst(Head,no);
	}
	else if(iPos == iSize + 1)					// Last Position
	{
		InsertLast(Head,no);
	}
	else										// In between first and last position
	{
		newn = (PNODE)malloc(sizeof(NODE));
		newn -> data = no;
		newn -> next = NULL;
		
		for(i = 1; i < iPos - 1; i++)
		{
			Temp = Temp -> next;
		}
		newn -> next = Temp -> next;
		Temp -> next = newn;
	}
}

void DeleteAtPosition(PPNODE Head, int iPos)
{
	int iSize = 0, i = 0;
	PNODE Temp = *Head;
	PNODE Target = NULL;
	
	iSize = Count(*Head);
	
	if((iPos < 1) || (iPos > iSize))		// Invalid Position
	{
		return;
	}
	if(iPos == 1)								// First Position
	{
		DeleteFirst(Head);
	}
	else if(iPos == iSize)					// Last Position
	{
		DeleteLast(Head);
	}
	else										// In between first and last position
	{
		for(i = 1; i < iPos - 1; i++)
		{
			Temp = Temp -> next;
		}
		Target = Temp -> next;
		
		Temp -> next = Target -> next;
		free(Target);
	}
}

int main()
{
    PNODE First = NULL;
    int iRet = 0, iOption = 1, iValue = 0,iPos = 0;
    
    while(iOption != 0)
    {
        printf("\n__________________________________________________________________\n");
        printf("Enter Your Action on Linked List : \n");
        printf("1 : Insert Node at First Position\n");
        printf("2 : Insert Node at Last Position\n");
        printf("3 : Insert Node at Given Position\n");
		printf("4 : Delete First Node\n");
        printf("5 : Delete Last Node\n");
        printf("6 : Delete Node at Given Position\n");
        printf("7 : Display the Contents of Linked List\n");
        printf("8 : Count Number of Nodes of Linked List\n");
        printf("0 : Exit the Application\n");
        scanf("%d",&iOption);
        printf("\n___________________________________________________________________\n");
        
        switch(iOption)
        {
            case 1 :
                printf("Enter Data to Insert : \n");
                scanf("%d",&iValue);
				
                InsertFirst(&First,iValue);
                break;
                
            case 2 :
                printf("Enter Data to Insert : \n");
                scanf("%d",&iValue);
				
                InsertLast(&First,iValue);
                break;
            
			case 3:
				printf("Enter Data to Insert : \n");
                scanf("%d",&iValue);
				
				printf("Enter the Position\n");
				scanf("%d",&iPos);
				
                InsertAtPosition(&First,iValue,iPos);
                break;
				
			case 4:
				DeleteFirst(&First);
				break;
			
			case 5:
				DeleteLast(&First);
				break;
			
			case 6:
				printf("Enter the Position\n");
				scanf("%d",&iPos);
				
                DeleteAtPosition(&First,iPos);
                break;
				
            case 7:
                printf("Nodes of Linked List are : \n");
                Display(First);
                break;
				
			case 8 :
                iRet = Count(First);
                printf("Number of Nodes are : %d\n",iRet);
                break;
                
            case 0:
                printf("Thank you for using Linked List Application \n");
                break;
                
            default:
                printf("Please Enter Valid Option \n");
                break;
        } // End of switch
    } // End of while
    return 0;
} // End of main