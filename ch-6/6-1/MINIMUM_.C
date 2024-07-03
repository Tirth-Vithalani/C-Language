#include<stdio.h>
#include<conio.h>

main()
{ int a,b;
  clrscr();
  printf("Enter First Namber :");
  scanf("%d",&a);
  printf("Enter Second Namber :");
  scanf("%d",&b);

   if (a<b)

   {   clrscr();
    printf("%d number is MINIMUM",a);
   }
   else
   {clrscr();
    printf("%d number is MINIMUM",b);
   }

  getch();
}