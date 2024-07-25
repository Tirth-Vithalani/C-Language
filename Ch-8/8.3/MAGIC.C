#include<stdio.h>
#include<conio.h>

main()
{
	int sum=0, mul=1, rem;
	int n;

	clrscr();
	printf("Enter any number: ");
	scanf("%d",&n);

	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem;
		mul=mul*rem;
		n=n/10;
	}
		if(sum==mul)
		{
			printf("This is magic number.");
		}
		else
		{
			printf("This is not magic number.");
		}

	getch();
}