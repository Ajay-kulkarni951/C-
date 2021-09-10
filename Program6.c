// Accept number from user and check whether that number is even or odd.
// Input : 4
// Output : Its even

// Input : 7
// Output : Its odd

/////////////////////////////////////////////////////////////////////
//
// Function name : CheckEven
// Input : Integer
// Output : Boolean (True / False)
// Description : It is used to check whether number is even or odd
// Date : 01/03/2021
// Author : Ajay Naresh Kulkarni
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
	if(iNo % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int iValue = 0;
	bool bRet = false;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet = CheckEven(iValue);
	
	if(bRet == true)
	{
		printf("%d is even number\n",iValue);
	}
	else
	{
		printf("%d is odd number\n",iValue);
	}
	
	return 0;
}	