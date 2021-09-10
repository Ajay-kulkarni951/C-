// Accept two values from user and check that first number is completely divisible by second number.

#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo1, int iNo2)
{
	if((iNo1 % iNo2) == 0)
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
	int iValue1 = 0, iValue2 = 0;
	bool bRet = false;
	
	printf("Enter first number\n");
	scanf("%d",&iValue1);
	
	printf("Enter second number\n");
	scanf("%d",&iValue2);
	
	bRet = CheckDivisible(iValue1, iValue2);
	
	if(bRet == true)
	{
		printf("%d is divisible by %d\n",iValue1, iValue2);
	}
	else
	{
		printf("%d is not divisible by %d\n",iValue1, iValue2);
	}
	
	return 0;
}
	