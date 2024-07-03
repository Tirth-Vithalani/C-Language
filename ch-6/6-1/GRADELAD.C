#include<stdio.h>
#include<conio.h>
main()
{
	 int M,E,S,G,H,sum;
	 float Total;
	clrscr();
	printf("ENTER YOUR MATHS MARK:");
	scanf("%d",&M);
	printf("ENTER YOUR ENGLISH MARK :");
	scanf("%d",&E);
	printf("ENTER YOUR SCINCE MARK :");
	scanf("%d",&S);
	printf("ENTER YOUR GUJRATI MARK :");
	scanf("%d",&G);
	printf("ENTER YOUR HINDI MARK :");
	scanf("%d",&H);
	sum = (M + E + S + G + H);
	printf("sum of marks %d\n",sum);
	Total = (sum/500.)*100;
	printf("\n");
	printf("Total= %.2f %%",Total);
	printf("\n\n");
		if(Total>=91 && Total<=100)
	{
	printf("GRADE - A+",Total);
	}
       else if(Total>=81 && Total<=90)
	{
	printf("GRADE - A",Total);
	}
	 else if(Total>=71 && Total<=80)
	{      clrscr();
	printf("GRADE - B+",Total);
	}
       else if(Total>=61 && Total<=70)
	{      clrscr();
	printf("GRADE - B",Total);
	}
       else if(Total>=51 && Total<=60)
	{      clrscr();
	printf("GRADE - C+",Total);
	}
       else if(Total>=41 && Total<=50)
	{      clrscr();
	printf("GRADE - C",Total);
	}
	else if(Total>=33 && Total<=40)
	{       clrscr();
	printf("GRADE - D",Total);
	}
	else
       {

	}

	getch();

}