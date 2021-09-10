#include<stdio.h>
#include<string.h>

int MyStrlen(char arr[])
{
	int i = 0;
	while(arr[i] != '\0')
	{
		i++;
	}
	return i;
}

int main()
{
	char str1[15] = "Hello";
	int ret = 0;
	
	ret = MyStrlen(str1);
	printf("String length is : %d\n",ret);
	
	return 0;
}
