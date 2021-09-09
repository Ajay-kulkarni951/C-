// 5. Write a program which accept one number from user and on its first 4 
// bits. Return modified number. 
// Input : 73 
// Output : 79 

#include<stdio.h>
typedef unsigned int UINT; 

UINT OnBit(UINT iNo) 
{ 
	UINT iResult = 0, iMask = 0x0000000F;
	
	iResult = iNo | iMask;
	
	return iResult;
}
int main()
{
	UINT iValue = 0;
	UINT iRet = 0;
	
	printf("Enter a number\n");
	scanf("%u",&iValue);
	
	iRet = OnBit(iValue);
	
	printf("Modified number is : %u\n",iRet);
	
	return 0;
}