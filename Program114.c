// 4. Write a program which accept string from user and check whether 
// it contains vowels in it or not. 
// Input : “marvellous” 
// Output : TRUE 
// Input : “Demo” 
// Output : TRUE 
// Input : “xyz” 
// Output : FALSE 
#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkVowel(char *str) 
{ 
	int iCnt = 0; 
	if(str == NULL)
	{
		return -1;
	}
	while(*str != '\0') 
	{ 
		if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
		{
			iCnt = 1;
		}
		str++;
	} 
	if(iCnt == 1)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
} 
int main() 
{ 
	char arr[20]; 
	BOOL bRet = FALSE; 
	printf("Enter string\n"); 
	scanf("%[^'\n']s",arr); 
	bRet = ChkVowel(arr); 
	if(bRet == TRUE) 
	{ 
		printf("Contains Vowel\n"); 
	} 
	else 
	{ 
		printf("There is no Vowel\n"); 
	} 
	return 0; 
}