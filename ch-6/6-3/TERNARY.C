#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	clrscr();
	printf("Entre any number : ");
	scanf("%d",&a);
	printf("Entre any number : ");
	scanf("%d",&b);
	printf("Entre any number : ");
	scanf("%d",&c);
	clrscr();
	(a<b)
	? printf("%d is minimum number",a)
	: printf("%d is minimum number",b);
	clrscr();
	(b<c)
	 ? printf("%d is minimum number",b)
	 : printf("%d is minimum number",c);
	 clrscr();
	(c<a)
	 ? printf("%d is minimum number",c)
	 : printf("%d is minimum number",a);

	 getch();




}