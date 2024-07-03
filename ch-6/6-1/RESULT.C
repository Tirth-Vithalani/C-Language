#include<conio.h>
#include<stdio.h>
main()
{ int M,E,S;
  float Total;
  clrscr();
  printf("ENTER YOUR MATHS MARK:");
  scanf("%d",&M);
  printf("ENTER YOUR ENGLISH MARK :");
  scanf("%d",&E);
  printf("ENTER YOUR SCINCE MARK :");
  scanf("%d",&S);
  Total = ((M+E+S)/300.)*100;
  printf("Total=%.2f",Total);
  printf("\n\n");
  if(Total>=83.33)
  {
  printf("You are pass !!",Total);
  }
  else
  { printf("You are fail !!",83.33);
  }
  getch();

  }
