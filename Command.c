#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[])
{
	int no1,no2,ret;
	
	printf("Number of command line arguments :%d\n",argc);
	printf("Executable file name is : %s\n",argv[0]);
	
	no1 = atoi(argv[1]);
	no2 = atoi(argv[2]);
	
	ret = no1 + no2;
	
	printf("Addition is : %d\n",ret);
	
	return 0;
}

// gcc Command.c -o Myexe
// Myexe 10 11
// argc : Arguments count
// argv : argv is an array of character pointer