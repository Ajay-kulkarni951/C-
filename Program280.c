// Copy one string into another by converting each chracter into capitaal character
#include<stdio.h>

void strcpyXX(char src[], char dest[])
{
	if(src == NULL || dest == NULL)
	{
		return;
	}
	while(*src !='\0')
	{
		if((*src >= 'a') && (*src <= 'z'))
		{
			*dest = *src - 32;  //*dest = *src + ('A'-'a');
		}
		else
		{
			*dest = *src;
		}
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
	
	strcpyXX(arr,brr);
	printf("Original string is : %s\n",arr);
	printf("After copying is :%s\n",brr);
	return 0;
	
}