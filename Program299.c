// Accept number from user and count number of bits which are ON.
#include<stdio.h>

int CountONBits(unsigned int iNo)
{
	unsigned int iMask = 0x00000001,iResult = 0;
	int iCnt = 0, i = 0;
	

	for(i = 0; i < 32; i++) 
	{
		iResult = iNo & iMask;
		if(iResult == iMask)
		{
			iCnt++;
		}
		iMask = iMask << 1;
	}

	return iCnt;

}
int main()
{
	unsigned int iValue = 0;
	
	int iRet;

	printf("Enter number\n");
	scanf("%u",&iValue);
	

	iRet = CountONBits(iValue);

	printf("COunt of ON bits are : %d\n",iRet);

	return 0;
}