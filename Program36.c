// 1.Write a program which accept number from user and print that number of $ & * on screen. 
// Input : 5 
// Output : $ * $ * $ * $ * $ *

#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	printf("\n");
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("$\t*\t");
	}
	printf("\n");
}

int main()
{	
	int iValue = 0;
	printf("Enter a number\n");
	scanf("%d",&iValue);
	Pattern(iValue);
	return 0;
}