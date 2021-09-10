// Accept number from user and return the smallest digit.
// Input : 7521
// Output : 1
// Input : 121
// Output : 1
// Input : 56892
// Output : 2
// 09-03-2021

#include<stdio.h>

int MinDigit(unsigned long int iNo)
{
	int iDigit = 0, iMin = 9;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		if(iDigit < iMin)
		{
			iMin = iDigit;
			if(iMin == 0)
			{
				break;
			}
		}
		iNo = iNo / 10;
	}
	return iMin;
}

int main()
{
	unsigned long int iValue = 0, iRet = 0;
	
	printf("Enter a number\n");
	scanf("%lu",&iValue);
	
	iRet = MinDigit(iValue);
	
	printf("Smallest digit is : %d\n",iRet);
	return 0;
}