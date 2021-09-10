// Accept number from user and count the ON bits in its binary equivalent
#include<stdio.h>

int CountOne(unsigned int iNo)
{
	unsigned int iDigit = 0;
	int iCnt = 0;
	while(iNo > 0)
	{
		iDigit = iNo % 2;
		iCnt = iCnt + iDigit;
		iNo = iNo / 2;
	}
	return iCnt;
}
int main()
{
	unsigned int iValue = 0;
	int iRet = 0; 
	
	printf("Enter number\n");
	scanf("%u",&iValue);
	
	iRet = CountOne(iValue);
		
	printf("Count of ON bits is/are %d\n",iRet); 
	
	return 0;
}
	