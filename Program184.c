// 4. Write a recursive program which accept number from user and return 
// smallest digit 
// Input : 87983 
// Output : 3 

#include<stdio.h>

int Min(int iNo) 
{ 
	static int iSmall = 9, rem;

	if(iNo > 0)
	{
		rem = iNo % 10;
		if(iSmall > rem)
		{
			iSmall = rem;
		}
		iNo = iNo / 10;
		Min(iNo);
	}
	return iSmall;
} 

int main() 
{ 
	int iValue = 0, iRet = 0; 
	printf("Enter number\n"); 
	scanf("%d",&iValue); 
	iRet = Min(iValue); 
	printf("%d",iRet); 
 
	return 0; 
}