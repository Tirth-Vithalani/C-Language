#include<stdio.h>
#include<conio.h>

main()
{  char GRADE;
   int a;
    clrscr();
    printf("Enter your marks : ");
    scanf("%d",&a);  // 98 => grade = 'A'
    printf("\n\n");
    (a>=91 && a<=100)
    ? printf("GRADE A !!");
    :(a>=81 && a<=90)
	    ? printf("GRADE B !!")
	    :(a>=71 && a<=80)
		   ?printf("GRADE C !!")
		   :(a>=61 && a<=70)
			?printf("GRADE D !!")
			:(a>=51 && a<=60)
				?printf("GRADE E !!")
				:printf("SORRY , YOU ARE FAIL ..");




    getch();

}



