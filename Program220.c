// Accept numbner from user and return the largest digit.
// Input : 7521
// Output : 7
// Input : 121
// Output : 2
// Input : 56892
// Output : 9
// 08-03-2021

#include<stdio.h>

int MaxDigit(int iNo)
{
	int iDigit = 0, iMax = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		if(iMax < iDigit)
		{
			iMax = iDigit;
		}
		iNo = iNo / 10;
	}
	return iMax;
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter a number\n");
	scanf("%d",&iValue);
	
	iRet = MaxDigit(iValue);
	
	printf("Largest digit is : %d\n",iRet);
	return 0;
}