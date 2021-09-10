#include<stdio.h>

int CountOneI(int iNo)
{
	int iMask = 0x00000001;
	int i = 0 ,iCnt = 0;
	
	while(i < 32)
	{
		if((iNo & iMask) == iMask)
		{
			iCnt++;
		}
		i++;
		iMask = iMask << 1;
	}
	return iCnt;
}

int CountOneR(int iNo)
{
	static int iMask = 0x00000001;
	static int i = 0 ,iCnt = 0;
	
	if(i < 32)
	{
		if((iNo & iMask) == iMask)
		{
			iCnt++;
		}
		i++;
		iMask = iMask << 1;
		CountOneR(iNo);
	}
	return iCnt;
}


int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter a Number \n");
	scanf("%d",&iValue);
	
	iRet = CountOneR(iValue);
	printf("Number of 1's are %d",iRet); 
	
	return 0;
}