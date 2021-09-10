// 4. Write a recursive program which accept number from user and return its factorial. 
// Input : 5 
// Output : 120 

#include<stdio.h>
 
int Fact(int iNo) 
{ 
	static int fact = 1;
	if(iNo > 0)
	{
		if(iNo == 1)
		{
			return 1;
		}
		else
		{
			fact = fact * iNo;
			iNo--;
			Fact(iNo);
		}
	}
	return fact;
}

int main() 
{ 
	int iValue = 0, iRet = 0; 
	printf("Enter number\n"); 
	scanf("%d",&iValue); 
	iRet = Fact(iValue); 
	printf("%d",iRet); 
 
	return 0; 
} 
