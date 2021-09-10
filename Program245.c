// Date : 15/03/2021
// Input : 4	4
// Output :
/*

	A
	
	A	B
	
	A	B	C
	
	A	B	C	D

*/	
#include<stdio.h>
void Pattern(unsigned int iRow, unsigned int iCol)
{
	int i = 0, j = 0;
	char ch = '\0';
	if(iRow != iCol)
	{
		return;
	}
	for(i = 1; i <= iRow; i++)
	{
		for(j = 1,ch = 'A'; j <= iCol; j++, ch++)
		{	
			if(j <= i)
			{
				printf("%c\t",ch);
			}			
		}   
		printf("\n");
	}
}

int main()
{
	unsigned int iValue1 = 0, iValue2 = 0;
	
	printf("Enter number of rows\n");
	scanf("%u",&iValue1);
	printf("Enter number of columns\n");
	scanf("%u",&iValue2);
	
	Pattern(iValue1, iValue2);
	
	return 0;
}