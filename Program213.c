// Accept a number from and return count of even digits .
// Input : 1234
// Output : 2
// Input : 2468
// Output : 4

#include<stdio.h>

int EvenDigits(int iNo)
{
	int iCnt = 0, iDigit = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		
		if(iDigit % 2 == 0)
		{
			iCnt = iCnt + 1;
		}
		
		iNo = iNo / 10;
	}
	
	return iCnt;
}

int main()
{
	int iValue = 0, iRet = 0;
	
	
	printf("Enter a number\n");
	scanf("%d",&iValue);
	
	iRet = EvenDigits(iValue);
	
	printf("Number of even digits are : %d\n",iRet);
	
	return 0;
}