#include<stdio.h>

void Display(int iCol)
{
	int j = 1;
	while(j <= iCol)
	{
		printf("*\t");
		j++;
	}
}

void DisplayR(int iRow, int iCol)
{
	int i = 1;
	while(i <= iRow)
	{
		Display(iCol);
		i++;
		printf("\n");
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