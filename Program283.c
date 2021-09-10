#include<stdio.h>

void strncpyX(const char src[], char dest[], int value)
{
	if((src == NULL) || (dest == NULL) || (value <= 0))
	{
		return;
	}
	while((value > 0) && (*src != '\0'))
	{
		*dest = *src;
		dest++;
		src++;
		value--;
	}
	*dest = '\0';
}

int main()
{
	char arr[20];
	char brr[20];
	int iNo = 0;

	printf("Enter string\n");
	scanf("%[^'\n']",arr);	
	
	printf("Enter number of elements to copy\n");
	scanf("%d",&iNo);

	strncpyX(arr,brr,iNo);

	printf("String after copy is : %s\n",brr);

	return 0;
}

