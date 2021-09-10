#include<stdio.h>

void DisplayI(int iRow, int iCol)
{
	int i = 1, j = 1;
	while(i <= iRow)
	{
		while(j <= iCol)
		{
			printf("* ");
			j++;
		}
		j = 1;
		printf("\n");
		i++;
	}
}

int main()
{
	int iRow = 0, iCol = 0;
	printf("Enter Number of rows\n");
	scanf("%d",&iRow);
	printf("Enter Number of columns\n");
	scanf("%d",&iCol);
	
	DisplayI(iRow,iCol);
	
	return 0;
}