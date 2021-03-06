#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    if(*Head != NULL)
    {
        newn->next = *Head;
    }
    *Head = newn;
}

void Display(PNODE Head)
{
    while(Head)
    {
        printf("|%d|->",Head->data);
        Head = Head->next;
    }
    printf("\n");
}

void Reverse(PPNODE Head)
{
	PNODE pudhacha = NULL, magacha = NULL, Current = *Head;
	if(*Head == NULL)
	{
		return;
	}
	while(Current != NULL)
	{
		pudhacha = Current -> next;
		Current -> next = magacha;
		magacha = Current;
		Current = pudhacha;
	}
	*Head = magacha;
}

int main()
{
	bool bRet;
    PNODE First = NULL;
	
	InsertFirst(&First, 111);
    InsertFirst(&First, 101);
    InsertFirst(&First, 51);

    Display(First);
    
	Reverse(&First);
	printf("After Reverse\n");
	
	Display(First);
	
    return 0;
}