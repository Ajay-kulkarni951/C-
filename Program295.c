// Accept number from user as well as accept position from user and toggle the bit at that position.
#include<stdio.h>

unsigned int ToggleBit(unsigned int iNo,unsigned int iPos)
{
	unsigned int iMask = 0x00000001;
	unsigned int iResult = 0;

	if((iPos < 1) || (iPos > 32))
	{
		return -1;
	}
	iMask = iMask << (iPos -1);
	
	iResult = iNo ^ iMask;
	
	return iResult;

}

int main()
{
	unsigned int iValue1 = 0;
	unsigned int iValue2 = 0;
	unsigned int iRet;

	printf("Enter number\n");
	scanf("%u",&iValue1);
	printf("Enter a position\n");
	scanf("%u",&iValue2);

	iRet = ToggleBit(iValue1, iValue2);

	printf("Number after updation :%u\n",iRet);
	
	return 0;
}