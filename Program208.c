// Accept number from user and display whether it is perfect or not.
// Input : 6
// Output : Yes

// Input : 12
// Output : No

#include<stdio.h>
#include<stdbool.h>

bool FactorsSum(int iNo)
{
	int iCnt = 0, ans = 0;
	
	for(int iCnt = 1; iCnt <= iNo/2; iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			 ans = ans + iCnt;
		}
	}
	
	if(ans == iNo)
	{
		return true;
	}
	else
	{
		return false;
	}
		
}
int main()
{
	int iValue = 0;
	bool bRet;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet = FactorsSum(iValue);
	
	if(bRet == true)
	{
		printf("%d is perfect number\n",iValue);
	}
	else
	{
		printf("%d is not perfect number\n",iValue);
	}

	return 0;
}	