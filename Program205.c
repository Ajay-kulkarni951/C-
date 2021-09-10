// Accept number from user and display factors of that number.
// Input : 12
// Output : 1	2	3	4	6

// Input : 20
// Output : 1	2	4	5	10

#include<stdio.h>

void Factors(int iNo)
{
	int iCnt = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = 1; iCnt < iNo; iCnt++)
	{
		if(iNo % iCnt == 0)
		{
			printf("%d\n",iCnt);
		}
	}
}
// Time Complexity : O(N)
int main()
{
	int iValue = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	Factors(iValue);
	
	return 0;
}