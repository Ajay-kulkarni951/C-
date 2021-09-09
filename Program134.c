// 4. Write a program which checks whether 7th & 8th & 9th bit is On or 
// OFF. 
// Solution :
#include<stdio.h>
#include<stdbool.h> 
typedef int BOOL; 
typedef unsigned int UINT; 
#define TRUE 1 
#define FALSE 0 
BOOL ChkBit(UINT iNo) 
{ 
	UINT iMask = 0x000001C0;
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
		printf("7th & 8th & 9th bit is ON\n");
	}
	else
	{
		printf("7th & 8th & 9th bit is OFF\n");
	}
	return 0;
}