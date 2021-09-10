#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
// Binary Search Tree
typedef struct node
{
	struct node *lchild;
	int data;
	struct node *rchild;
}NODE, *PNODE, **PPNODE;


void InsertNode(PPNODE Head, int iNo)
{
	PNODE temp = *Head;
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	newn -> data = iNo;
	newn -> lchild = NULL;
	newn -> rchild = NULL;
	
	if(*Head == NULL)			// Root node
	{
		*Head = newn;
	}
	else
	{
		while(1)
		{
			if(iNo > temp -> data)  // large
			{
				if(temp -> rchild == NULL)
				{
					temp -> rchild = newn;
					break;
				}
				temp = temp -> rchild;
			}
			
			else if(iNo < temp -> data)   // small
			{
				if(temp -> lchild == NULL)
				{
					temp -> lchild = newn;
					break;
				}
				temp = temp -> lchild;
			}
			
			else if(iNo == temp -> data)  // equal
			{
				printf("Duplicate Element \n");
				free(newn);
				break;
			}
		}
	}
}


void Inorder(PNODE Head)       	// LDR
{
	if(Head != NULL)
	{
		Inorder(Head -> lchild); //L
		printf("%d\t",Head -> data); // D
		Inorder(Head -> rchild); // R
	}
}


void Preorder(PNODE Head)      	// DLR
{
	if(Head != NULL)
	{
		printf("%d\t",Head -> data); // D
		Preorder(Head -> lchild); //L
		Preorder(Head -> rchild); // R		
	}
}


void Postorder(PNODE Head)	   	// LRD
{
	if(Head != NULL)
	{
		Postorder(Head -> lchild); //L
		Postorder(Head -> rchild); // R
		printf("%d\t",Head -> data); // D
	}
}


void Count(PNODE Head, int *p)
{
	if(Head != NULL)
	{	
		(*p)++;
		Count(Head -> lchild, p);
		Count(Head -> rchild, p);	
	}
}

void CountLeaf(PNODE Head,int *p)
{
	if(Head != NULL)
	{
		if((Head -> lchild == NULL) && (Head -> rchild == NULL))
		{	
			(*p)++;
		}
		CountLeaf(Head -> lchild, p);
		CountLeaf(Head -> rchild, p);
	}
}

void CountParent(PNODE Head, int *p)
{
	if(Head != NULL)
	{
		if((Head -> lchild != NULL) || (Head -> rchild != NULL))
		{
			(*p)++;		
		}
		CountParent(Head -> lchild, p);
		CountParent(Head -> rchild, p);
	}
}

bool Search(PNODE Head, int iNo)
{
	if(Head != NULL)
	{
		if(iNo > Head -> data)
		{
			return Search(Head -> rchild, iNo);
		}
		else if(iNo < Head -> data)
		{
			return Search(Head -> lchild, iNo);
		}
		else if(iNo == Head -> data)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}


int main()
{
	PNODE Root = NULL;
	int iChoice = 1, iNo = 0, iRet = 0, i = 0;
	bool bRet = false;
	
	while(iChoice != 0)
	{
		printf("Enter your Choice\n");
		printf("1. Insert Node \n");
		printf("2. Display Inorder \n");
		printf("3. Display Preorder \n");
		printf("4. Display Postorder \n");
		printf("5. Count nodes \n");
		printf("6. Count leaf nodes \n");
		printf("7. Count parent nodes \n");
		printf("8. Search \n");
		printf("0. Exit Application \n");
		
		scanf("%d",&iChoice);
		
		switch(iChoice)
		{
			case 1:
				printf("Enter number \n");
				scanf("%d",&iNo);
				InsertNode(&Root,iNo);
				break;
				
				
			case 2:
				printf("Inorder traversal \n");
				Inorder(Root);
				printf("\n");				
				break;

			case 3:
				printf("Preorder traversal \n");
				Preorder(Root);
				printf("\n");
				break;

			case 4:
				printf("Postorder traversal \n");
				Postorder(Root);
				printf("\n");
				break;

			case 5:
				i = 0;
				Count(Root, &i);
				printf("Number of nodes are : %d\n",i);
				i = 0;
				break;
			
			case 6:
				i = 0;
				CountLeaf(Root,&i);
				printf("Number of Leaf nodes are : %d\n",i);
				i = 0;
				break;
				
			case 7:
				i = 0;
				CountParent(Root, &i);
				printf("Number of parent nodes are : %d\n",i);
				i = 0;
				break;	
				
				
			case 8:
				printf("Enter number \n");
				scanf("%d",&iNo);
				
				bRet = Search(Root, iNo);
				
				if(bRet == true)
				{
					printf("Number is present \n");
				}
				else
				{
					printf("Number is not present \n");
				}
				break;
				
			case 0:
				printf("Thank you for using application \n");
				break;
				
			default:
				printf("Please enter proper choice \n");
				break;
		}
	}
	return 0;
}