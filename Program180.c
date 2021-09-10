// 5. Write a recursive program which accept number from user and return its product of digits. 
// Input : 523 
// Output : 30 

#include<stdio.h>

int Mult(int iNo) 
{ 
	static int rem , mul = 1;
	if(iNo > 0)
	{
		rem = iNo % 10;
		if(rem != 0)
		{
			mul = mul * rem;
		}
		iNo = iNo / 10;
		Mult(iNo);
	}
	return mul;
} 

int main() 
{ 
	int iValue = 0, iRet = 0; 
	printf("Enter number\n"); 
	scanf("%d",&iValue); 
	iRet = Mult(iValue); 
	printf("%d",iRet); 
 
	return 0; 
}