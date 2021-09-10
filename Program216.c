// Accept number from user and return multiplication of digits
// Input : 7521
// Output : 70
// Input : 4502 
// Output : 40
// Date : 08-03-2021

#include<stdio.h>

int MultDigit(int iNo)
{
	int iDigit = 0, iMul = 1;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		
		if(iDigit != 0)
		{
			iMul = iMul * iDigit;
		}
		
		iNo = iNo / 10;
	}
	
	return iMul;
}
int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter a number\n");
	scanf("%d",&iValue);
	
	iRet = MultDigit(iValue);
	
	printf("Multiplication of digits : %d",iRet);
	
	return 0;
}