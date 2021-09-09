// 1.Write a program which accept one number from user and count number of 
// ON (1) bits in it without using % and / operator. 
// Input : 11 
// Output : 3 
#include<stdio.h>
#include<stdlib.h>
typedef unsigned int UINT;
int CountOne(UINT iNo) 
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
	UINT iValue = 0;
	int iRet = 0;
	
	printf("Enter a number\n");
	scanf("%u",&iValue);
	
	iRet = CountOne(iValue);
	
	printf("Count of on bits is :%d\n",iRet);	
	
	return 0;
}