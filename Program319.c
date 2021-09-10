#include<stdio.h>

void Display(int iCol)					// Display / travel columns
{
	static int j = 1;
	if(j <= iCol)
	{
		printf("*\t");
		j++;
		Display(iCol);					// recursive call
	}
	j = 1;
}

void DisplayR(int iRow, int iCol)		// Display / travel rows
{
	static int i = 1;
	if(i <= iRow)
	{
		Display(iCol);					// call to travel columns
		i++;
		printf("\n");
		DisplayR(iRow,iCol);			// recursive call
	}
}

int main()
{
	int iRow = 0, iCol = 0;
	printf("Enter Number of rows\n");
	scanf("%d",&iRow);
	printf("Enter Number of columns\n");
	scanf("%d",&iCol);
	
	DisplayR(iRow,iCol);
	
	return 0;
}