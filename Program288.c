// Accept number from user and count the ON bits in its binary equivalent
#include<stdio.h>

int CountOne(unsigned int iNo)
{
	int iCnt = 0;
	while(iNo)
	{
		iCnt += (iNo % 2);
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
	