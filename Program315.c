#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool CheckPerfect(int iNo)
{
	int i = 1, iSum = 0;
	
	while(i <= (iNo / 2))
	{
		if(iNo % i == 0)
		{
			iSum = iSum + i;
		}
		i++;
	}
	
	if(iSum == iNo)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool CheckPerfectR(int iNo)
{
	static int i = 1, iSum = 0;
	
	if(i <= (iNo / 2))
	{
		if(iNo % i == 0)
		{
			iSum = iSum + i;
		}
		i++;
		CheckPerfectR(iNo);
	}
	
	if(iSum == iNo)
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
	printf("Enter Number \n");
	scanf("%d",&iValue);
	bRet = CheckPerfectR(iValue);
	
	if(bRet == true)
	{
		printf("Perfect Number");
	}
	else
	{
		printf("Not Perfect");
	}
	return 0;
}