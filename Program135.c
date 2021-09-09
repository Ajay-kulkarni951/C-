// 5. Write a program which checks whether first and last bit is On or 
// OFF. First bit means bit number 1 and last bit means bit number 32. 
// Solution : 
#include<stdio.h>
#include<stdbool.h>
typedef int BOOL; 
typedef unsigned int UINT; 
#define TRUE 1 
#define FALSE 0 
BOOL ChkBit(UINT iNo) 
{ 
	UINT iMask = 0x80000001;
	UINT iResult = 0;
	
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
	BOOL bRet = 0;
	
	printf("Enter a number\n");
	scanf("%u",&iValue);
	
	bRet = ChkBit(iValue);
	
	if(bRet == TRUE)
	{
		printf("first and last bit is ON\n");
	}
	else
	{
		printf("first and last bit is OFF\n");
	}
	return 0;
}