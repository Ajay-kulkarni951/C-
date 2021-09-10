// Input : 5
// Output : *	*	*	*	*
// 10-03-2021
#include<stdio.h>
void Pattern(unsigned int iNo)
{
	int iCnt = 0;
	printf("\n");
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("*\t");
	}
	printf("\n");
}

int main()
{
	unsigned int iValue1 = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue1);
	
	Pattern(iValue1);
	
	return 0;
}
