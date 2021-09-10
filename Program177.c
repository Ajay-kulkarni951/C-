// 2. Write a recursive program which accept number from user and return 
// summation of its digits. 
// Input : 879 
// Output : 24 

#include<stdio.h>
 
int Sum(int iNo) 
{ 
	static int rem, sum = 0;
	if(iNo > 0)
	{
		rem = iNo % 10;
		sum = sum + rem;
		iNo = iNo / 10;
		Sum(iNo);
	}
	return sum;
}

int main() 
{ 
	int iValue = 0, iRet = 0; 
	printf("Enter number\n"); 
	scanf("%d",&iValue); 
 
	iRet = Sum(iValue);
	printf("Output : %d",iRet);
	return 0; 
}