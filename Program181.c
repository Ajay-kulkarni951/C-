// 1. Write a recursive program which accept string from user and count white spaces. 
// Input : HE llo WOr lD 
// Output : 3 

#include<stdio.h>

int iCnt = 0;

int WhiteSpace(char *str) 
{ 
	
	if(*str != '\0')
	{   
		if(*str == ' ')
		{
			iCnt++;
		}
		*str++;		
		WhiteSpace(str);
	}
	return iCnt;
}

int main() 
{ 
	int iRet = 0; 
	char arr[20]; 
	printf("Enter string\n"); 
	scanf("%s",arr); 
	iRet = WhiteSpace(arr); 
	printf("%d",iRet); 
 
	return 0; 
}