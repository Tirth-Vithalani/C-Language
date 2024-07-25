#include<stdio.h>
#include<conio.h>
main()
{       int n,ld,sum;
	clrscr();
	printf("Enter any number : ");
	scanf("%d",&n);
	ld=n%10;
	while(n>=10)
	{
		n=n/10;


	}

	 sum=ld+n;
	 printf("%d+%d=%d",n,ld,sum);



	getch();
}