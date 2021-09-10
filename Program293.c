// Accept number from user and check weather 3rd ,5th and 7th bit is ON or OFF
#include<stdio.h>
#include<stdbool.h>

bool CheckBit(unsigned int iNo)
{
	unsigned int iMask = 0x00000054;
	unsigned int iResult = 0;
	
	iResult = iNo & iMask;
	
	if(iResult == iMask)
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
	unsigned int iValue = 0;
	bool bRet;
	
	printf("Enter number\n");
	scanf("%u",&iValue);
	
	bRet = CheckBit(iValue);
	
	if(bRet == true)
	{
		printf("3rd ,5th and 7th bits are on\n");
	}
	else
	{
		printf("3rd ,5th and 7th bits are off\n");
	}
	return 0;
}