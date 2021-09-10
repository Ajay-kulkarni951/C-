// 10-03-2021
// Input : 5	
// Output : A	B	C	D	E		
// Input : 3	
// Output : A	B	C
#include<stdio.h>
void Pattern(unsigned int iNo)
{
	int iCnt = 0;
	char ch = 'A';
	printf("\n");
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("%c\t",ch);
		ch++;
	}
	printf("\n");
}

int main()
{
	unsigned int iValue1 = 0;
	
	printf("Enter first number\n");
	scanf("%d",&iValue1);
	
	Pattern(iValue1);
	
	return 0;
}
