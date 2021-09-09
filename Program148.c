// 3. Write a program which accept one number from user and check whether 
// 9th or 12th bit is on or off. 
// Input : 257 
// Output : TRUE 
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL ChkBit(UINT iNo) 
{ 
	UINT iMask = 0x00000900, iResult = 0;
	
	iResult = iNo & iMask;
	
	if(iResult == iMask)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
	
}
int main()
{
	UINT iValue = 0;
	BOOL bRet = FALSE;
	
	printf("Enter a number\n");
	scanf("%u",&iValue);
	
	bRet = ChkBit(iValue);
	
	if(bRet == TRUE)
	{
		printf("Bits are on");
	}
	else
	{
		printf("Bits are off");
	}	
	
	return 0;
}