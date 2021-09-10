// Accept number from user an calculate frequency by entering another digit.
// Input : 75845   5
// Output : 2
// Input : 89562   1
// Output : 0

#include<stdio.h>

int DigitFrequency(int iNo, int iDigit)
{
	int iCnt = 0, iNum = 0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	if(iDigit < 0 || iDigit > 9)
	{
		printf("Invalid Entry\n");
		return 0;
	}
	
	while(iNo > 0)
	{
		iNum = iNo % 10;
		
		if(iNum == iDigit)
		{
			iCnt = iCnt + 1;
		}
		
		iNo = iNo / 10;
	}
	
	return iCnt;
}

int main()
{
	int iValue1 = 0, iValue2 = 0, iRet = 0;
	
	
	printf("Enter a number\n");
	scanf("%d",&iValue1);
	printf("Enter the digit that you want to search\n");
	scanf("%d",&iValue2);
	
	iRet = DigitFrequency(iValue1,iValue2);
	
	printf("Frequency of digit is : %d\n",iRet);
	
	return 0;
}