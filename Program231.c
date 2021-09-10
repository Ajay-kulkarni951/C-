// 10-03-2021
// Input : 5
// Output : 5	*	4	*	3	*	2	*	1	*
#include<stdio.h>
void Pattern(unsigned int iNo)
{
	int iCnt = 0;
	printf("\n");
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("%d\t*\t",iCnt);
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
