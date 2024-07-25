#include <stdio.h>
#include <conio.h>
main()
{	int a,n;
	clrscr();
	printf("Enter any year : ");
	scanf("%d",&n);
	printf("Enter any year : ");
	scanf("%d",&a);
	while (a>=n)
	{
		if(n%4==0)
		{	printf("%d\t",n);

		}
		n++;


	}
	getch();

}