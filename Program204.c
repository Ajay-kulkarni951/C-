// Accept number from user and return its factorial
// Input : 5
// Output : 5*4*3*2*1 (120)
// Input : 4
// Output : 4*3*2*1 (24)

#include<stdio.h>

int Factorial(int iNo)
{
	int iCnt = 0;
	int iMul = 1;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		iMul = iMul * iCnt;
	}
	
	return iMul;
	
	
	/* By using while
	int iMul = 1;
	while(iNo > 0)
	{
		iMul = iMul * iNo;
		iNo--;
	}	
	return iMul;
	*/
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter a number\n");
	scanf("%d",&iValue);
	
	iRet = Factorial(iValue);
	
	printf("Factorial is : %d\n",iRet);
	
	return 0;
}

