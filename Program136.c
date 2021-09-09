// 1.Write a program which accept one number from user and off 7th bit of that 
// number if it is on. Return modified number. 
// Input : 79 
// Output : 15 

#include<stdio.h>
typedef unsigned int UINT; 
UINT OffBit(UINT iNo) 
{ 
	UINT iResult = 0, iMask = 0xFFFFFFBF;
	
	iResult = iNo & iMask;
	
	return iResult;
	
} 
int main()
{
	UINT iValue = 0;
	UINT iRet = 0;
	
	printf("Enter a number\n");
	scanf("%u",&iValue);
	
	iRet = OffBit(iValue);
	
	printf("Modified number is : %u\n",iRet);
	
	return 0;
}