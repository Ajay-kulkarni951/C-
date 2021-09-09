// 3. Write a program which accept string from user and display it inn 
// reverse order. 
// Input : “MarvellouS” 
// Output : “SuollevraM”
#include<stdio.h>
void Reverse(char *str) 
{ 
	int iCnt = 0;
	if(str == NULL)
	{
		return ;
	}
	while(*str != '\0')
	{
		str++;
		iCnt++;
	}
	str--;
	while(iCnt > 0)
	{
		printf("%c",*str);
		str--;
		iCnt--;
	}
	
} 
int main() 
{ 
 char arr[20]; 
 int iRet = 0; 
 printf("Enter string\n"); 
 scanf("%[^'\n']s",arr); 
 
 Reverse(arr); 
 return 0; 
} 