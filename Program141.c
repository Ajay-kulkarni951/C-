// 1.Write a program which accept one number and position from user and 
// check whether bit at that position is on or off. If bit is on return TURE 
// otherwise return FALSE. 
// Input : 10 2 
// Output : TRUE 
#include<stdio.h>
#include<stdbool.h>


bool ChkBit(unsigned int iNo, int iPos) 
{ 
	unsigned int iMask = 0x00000001;
	unsigned int iResult = 0;
	
	if((iPos < 1) || (iPos > 32))
	{
		return false;
	}
	
	iMask = iMask << (iPos - 1);

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
	int  iValue2 = 0;
	bool bRet;
	
	printf("Enter a number\n");
	scanf("%u",&iValue1);
	
	printf("Enter a position\n");
	scanf("%d",&iValue2);
	
	bRet = ChkBit(iValue1, iValue2);
	
	if(bRet == true)
	{
		printf("Entered Bit is ON\n");
	}
	else
	{
		printf("Entered Bit is OFF\n");
	}		
	
	return 0;
}