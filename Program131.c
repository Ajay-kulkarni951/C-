// 1.Write a program which checks whether 15th bit is On or OFF. 
// Solution : 
#include<stdio.h>
#include<stdbool.h>
typedef int BOOL ;
typedef unsigned int UINT ;
#define TRUE 1 
#define FALSE 0 
BOOL ChkBit(UINT iNo) 
{ 
	UINT iMask = 0x00004000;
	UINT Result = 0;
	
	Result = iNo & iMask;
	
	if(Result == iMask)
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
		printf("15th bit is ON\n");
	}
	else
	{
		printf("15th bit is OFF\n");
	}
	return 0;
}
	