// 4. Accept Character from user and check whether it is small case or 
// not (a-z). 
// Input : g 
// Output : TRUE 
// Input : D 
// Output : FALSE 
#include<stdio.h>
#include<stdbool.h>
#define TRUE 1 
#define FALSE 0 
typedef int BOOL; 
BOOL ChkSmall(char ch) 
{ 
 // Apply condition to check whether it is small case or not. 
	if((ch >= 'a') && (ch <= 'z'))
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
	bRet = ChkSmall(cValue); 
	if(bRet == TRUE) 
	{ 
		printf("It is Small case Character\n"); 
	} 
	else 
	{ 
		printf("It is not a Small case Character\n"); 
	} 
 
	return 0; 
} 