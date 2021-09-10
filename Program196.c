// Accept Number From User And Display All The Numbers Till That Number.
// Input : 8
// Output : 1 2 3 4 5 6 7 8

// Input : -6
// Output : 1 2 3 4 5 6

/*
	START 
		Accept onr number as norm
		If number is negative then convert it to positive
		Create one counter as Cnt and set it to 1
		
		Iterate till the counter is less than or equal to the number
			Print the value of counter on screen
			Increment the value of counter by 1
		Continue
	END
*/	
// 1 2 3 4 5
// Start : 1
// End : 5
// Difference : 1

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	
	if(iNo == 0)
	{
		return 0;
	}
	
	if(iNo < 0)	  // Input Updater 
	{
		iNo = -iNo;
	}
	
	//     1           2          3
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("%d\n",iCnt);   // 4
	}
	
	// 1 Initialization
	// 2 Condition
	// 3 Increment or decrement factor
	// 4 Loop body
	
	// 1 (2 4 3) (2 4 3) (2 4 3) (2 4 3) (2 4 3) 2 STOP
	// Output : 1	2	3	4	5
}	
			
int main()  // Entry point function
{
	int iValue = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}