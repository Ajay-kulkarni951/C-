// Accept number from user and return the addition of all digits of number.
// Input : 7521
// Output : 15 (7+5+2+1)

#include<stdio.h>

int SumDigits(int iNo)
{
	int iAdd = 0;
	int iDigit = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		iAdd = iAdd + iDigit;
		iNo = iNo / 10;
	}
	return iAdd;
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter a number\n");
	scanf("%d",&iValue);
	
	iRet = SumDigits(iValue);
	
	printf("Addition is %d\n", iRet);
	
	return 0;
}