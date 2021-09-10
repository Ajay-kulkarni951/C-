// Accept number from user and accept two positions and check weather both bits of positions are ON or OFF.
#include<stdio.h>
#include<stdbool.h>

bool CheckBit(unsigned int iNo, unsigned int iPos1, unsigned int iPos2)
{
	unsigned int iMask1 = 0x00000001;
	unsigned int iMask2	= 0x00000001;
	unsigned int iMask = 0;
	unsigned int iResult = 0;


	if((iPos1 < 1) || (iPos1 > 32) || (iPos2 < 1) || (iPos2 > 32))
	{
		return false;
	}
	iMask1 = iMask1 << (iPos1 - 1);
	iMask2 = iMask2 << (iPos2 - 1);

	iMask = iMask1 | iMask2;

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
	unsigned int iValue1 = 0, iValue2 =0, iValue3 = 0  ;

	bool bRet;

	printf("Enter number\n");
	scanf("%u",&iValue1);
	printf("Enter first position\n");
	scanf("%u",&iValue2);
	printf("Enter second position\n");
	scanf("%u",&iValue3);

	bRet = CheckBit(iValue1, iValue2, iValue3);

	if(bRet == true)
	{
		printf("Entered bits are on\n");
	}
	else
	{
		printf("Entered bits are off\n");
	}
	return 0;
}