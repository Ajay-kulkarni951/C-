#include<stdio.h>
#include<string.h>
int main()
{
	// ways in which we can create the string
	
	char str1[10] = "Hello";
	
	char str2[] = "Hello";
	
	char str3[] = {'H','e','l','l','o','\0'};
	
	printf("%s\n",str1);
	printf("%s\n",str2);
	printf("%s\n",str3);
	printf("Length of string is : %d\n",strlen(str1));
	printf("Size of string is : %d\n",sizeof(str1));
	return 0;
}