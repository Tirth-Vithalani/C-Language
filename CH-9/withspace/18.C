#include<stdio.h>
#include<conio.h>
main()
{
	int s,j,i;
	char ch='A';
	clrscr();
	for(i=1;i<=5;i++)
	{
					for(s=5;s>i;s--)
					{
						printf(" ");
					}
					for(j=1;j<=i;j++)
					{
					(i%2==0)
					?printf("0")
					:printf("1");
					}
	printf("\n");
	}
getch();
}