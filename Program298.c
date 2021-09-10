// Accept number from user as well as accept one position and on the bit on that particular position OFF the bit.
#include<stdio.h>

unsigned int BitSetOFF(unsigned int iNo,unsigned int iPos)
{
	unsigned int iMask = 0x00000001;
	unsigned int iResult = 0;

	if((iPos < 1) || (iPos > 32))
	{
		return -1;
	}

	iMask = iMask << (iPos -1);

	iMask = ~iMask;

	iResult = iNo & iMask;

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

	iRet = BitSetOFF(iValue1, iValue2);

	printf("Number after updation :%u\n",iRet);

	return 0;
}