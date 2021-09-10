// Accept percentage from user and check his passing criteria.

#include<stdio.h>

void CheckResult(int iMarks)
{
	if( (iMarks < 0) || (iMarks > 100) )
	{
		printf("Invalid marks");
		return;
	}
	if( (iMarks > 0) && (iMarks < 35) )
	{
		printf("Fail");
	}
	else if( (iMarks >= 35) && (iMarks < 50) )
	{
		printf("Passed with Pass Class");
	}
	else if( (iMarks >= 50)	&& (iMarks < 60) )
	{
		printf("Passed with Second Class");
	}
	else if( (iMarks >= 60) && (iMarks < 70) )
	{
		printf("Passed with First Class");
	}
	else 
	{
		printf("Passed with Distinction");
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter your marks\n");
	scanf("%d",&iValue);
	
	CheckResult(iValue);
	
	return 0;
}
	
	

