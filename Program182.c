// 2. Write a recursive program which accept number from user and return largest digit 
// Input : 87983 
// Output : 9 

#include<stdio.h>

int Max(int iNo) 
{ 
	static int iLar = 0, rem;
	if(iNo > 0)
	{
		rem = iNo % 10;
		if(iLar < rem)
		{
			iLar = rem;
		}
		iNo = iNo / 10;
		Max(iNo);
	}
	return iLar;
}

int main() 
{ 
	int iValue = 0, iRet = 0; 
	printf("Enter number\n"); 
	scanf("%d",&iValue); 
	iRet = Max(iValue); 
	printf("%d",iRet); 
 
	return 0; 
}