// 3. Write a program which accept one number and position from user and on 
// that bit. Return modified number. 
// Input : 10 3 
// Output : 14 

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

UINT OnBit(UINT iNo, int iPos) 
{ 
	UINT iMask = 0x00000001, iResult = 0;
	
	if((iPos < 1) || (iPos > 32))
	{
		return -1;
	}
	iMask = iMask << (iPos - 1);
	
	iResult = iNo | iMask;
	
	return iResult;
}
int main()
{
	UINT iValue1 = 0, iRet = 0;
	int  iValue2 = 0;

	
	printf("Enter a number\n");
	scanf("%u",&iValue1);
	
	printf("Enter a position\n");
	scanf("%d",&iValue2);
	
	iRet = OnBit(iValue1, iValue2);
	
	printf("Modified number is :%u\n",iRet);	
	
	return 0;
}