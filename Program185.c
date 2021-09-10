// 5. Write a recursive program which accept number from user and return its 
// reverse number. 
// Input : 523 
// Output : 325 

#include<stdio.h>
 
int Reverse(int iNo) 
{ 
	static int rev,rem;
	if(iNo > 0)
	{
		rem = iNo % 10;
		if(rem != 0)
		{
			rev = rev * 10 + rem;
		}
		iNo = iNo / 10;
		Reverse(iNo);
	}
	return rev;
} 

int main() 
{ 
	int iValue = 0, iRet = 0; 
	printf("Enter number\n"); 
	scanf("%d",&iValue); 
	iRet = Reverse(iValue); 
	printf("%d",iRet); 
 
	return 0; 
}