#include<stdio.h>
#include"headers.h"
int main()
{
	int cs;
	while(1)
	{
	printf("Program to be executed\n");
	printf("Select the program option to be executed from 1-6\n");
	scanf("%d",&cs);

	switch(cs)
		{
			case 1:
				{
					add();
					break;
				}
			case 2:
				{
					sub();
					break;
				}
			case 3:
				{
					mul();
					break;
				}
			case 4:
				{
					div();
					break;
				}
			case 5:
				{
					mod();
					break;
				}
			default:
				{
					printf("Invalid options\n");
					exit(0);
				}


		}
}
	return 0;	
}
