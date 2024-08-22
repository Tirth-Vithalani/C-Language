#include <stdio.h>
#include <conio.h>
main()
{  int i,j,n=65;
   clrscr();
   for(i=65;i<=69;i++)
   {
      for(j=65;j<=i;j++,n++)
      {
       printf("%c",n);
      }
      printf("\n");
   }



   getch();
}
