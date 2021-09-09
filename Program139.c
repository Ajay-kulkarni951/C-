// 4. Write a program which accept one number from user and toggle 7th and 
// 10th bit of that number. Return modified number. 
// Input : 137 
// Output : 713 

#include<stdio.h>
typedef unsigned int UINT; 

UINT ToggleBit(UINT iNo) 
{ 
	UINT iResult = 0, iMask = 0x00000240;
	
	iResult = iNo ^ iMask;
	
	return iResult;
} 

int main()
{
	UINT iValue = 0;
	UINT iRet = 0;
	
	printf("Enter a number\n");
	scanf("%u",&iValue);
	
	iRet = ToggleBit(iValue);
	
	printf("Modified number is : %u\n",iRet);
	
	return 0;
}