// 3. Write a recursive program which accept string from user and count number of small characters. 
// Input : HElloWOrlD 
// Output : 5 

#include<stdio.h>

int count = 0;

int Small(char *str) 
{ 
	if(*str != '\0')
	{
		if(*str >= 'a' && *str <= 'z')
		{
			count++;
		}
		*str++;
		Small(str);
	}
	return count;
}

int main() 
{ 
	int iRet = 0; 
	char arr[20]; 
	printf("Enter string\n"); 
	scanf("%s",arr); 
	iRet = Small(arr); 
	printf("%d",iRet); 
 
	return 0; 
}