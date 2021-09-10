// Accept number from user and take a position from user and check weather the bit is ON of OFF.
#include<stdio.h>
#include<stdbool.h>

bool CheckBit(unsigned int iNo,unsigned int iPos)
{
	unsigned int iMask = 0x00000001;
	unsigned int iResult = 0;

	if((iPos < 1) || (iPos > 32))
	{
		return false;
	}
	iMask = iMask << (iPos -1);
	
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
	unsigned int iValue1 = 0;
	unsigned int iValue2 = 0;
	bool bRet;

	printf("Enter number\n");
	scanf("%u",&iValue1);
	printf("Enter a position\n");
	scanf("%u",&iValue2);

	bRet = CheckBit(iValue1, iValue2);

	if(bRet == true)
	{
		printf("Entered bit is on\n");
	}
	else
	{
		printf("Entered bit is off\n");
	}
	return 0;
}