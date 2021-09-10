// Copy one string into another
#include<stdio.h>

void strcpyX(char src[], char dest[])
{
	if(src == NULL || dest == NULL)
	{
		return;
	}
	while(*src !='\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}
int main()
{
	char arr[20];
	char brr[20];
	
	printf("Enter string\n");
	scanf("%[^'\n']",arr);
	
	strcpyX(arr,brr);
	
	printf("After copying is :%s\n",brr);
	return 0;
	
}