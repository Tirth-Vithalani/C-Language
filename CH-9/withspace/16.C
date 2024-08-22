#include<stdio.h>
#include<conio.h>
main()
{
	int s,j,i;
	char ch='A';
	clrscr();
	for(i=1;i<=5;i++)
	{
					for(s=1;s<i;s++)
					{
						printf(" ");
					}
					for(j=i;j<=5;j++)
					{
						printf("%c",64+j);
					}
	printf("\n");
	}
getch();
}