// 2. Accept Character from user and check whether it is capital or not 
// (A-Z). 
// Input : F 
// Output : TRUE 
// Input : d 
// Output : FALSE 
#include<stdio.h>
#include<stdbool.h>
#define TRUE 1 
#define FALSE 0 
typedef int BOOL; 
BOOL ChkCapital(char ch) 
{ 
 // Apply condition to check whether it is capital or not.
	if((ch >= 'A') && (ch <= 'Z'))
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
	char cValue = '\0'; 
	BOOL bRet = FALSE; 
	printf("Enter the character\n"); 
	scanf("%c",&cValue); 
	bRet = ChkCapital(cValue); 
	if(bRet == TRUE) 
	{ 
		printf("It is Capital Character\n"); 
	} 
	else 
	{ 
		printf("It is not a Capital Character\n"); 
	} 
 
	return 0; 
} 