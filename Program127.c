// 2. Write a program which accept string from user and copy the 
// contents of that string into another string. (Implement strncpy() 
// function) 
// Input : “Marvellous Multi OS” 
// 10 
// Output : “Marvellous 
// Note : If third parameter is greater than the size of source string then 
// copy whole string into destination.
#include<stdio.h> 
void StrNCpyX(char *src, char *dest, int iCnt) 
{ 
	if((src == NULL) || (dest == NULL) || (iCnt <= 0))
	{
		return;
	}
	
	while((iCnt > 0) && (*src != '\0')) 
	{ 
		*dest = *src; 
		src++; 
		dest++; 
		iCnt--; 
	} 
	*dest = '\0'; 
} 
int main() 
{ 
	char arr[30]; // “Marvellous Multi OS”; 
	char brr[30]; // Empty string 
	int iValue = 0;
	printf("Enter a string\n");
	scanf("%[^'\n']",arr);
	printf("Enter a number\n");
	scanf("%d",&iValue);
	StrNCpyX(arr,brr,iValue); 
	printf("%s",brr); // Marvellous 
 
	return 0; 
} 