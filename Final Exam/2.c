#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("Enter A : ");
	scanf("%d",&a);
	printf("Enter B : ");
	scanf("%d",&b);
	printf("Enter C : ");
	scanf("%d",&c);
	
	
	if(a==b==c)
	{
		printf("All are equal");
	}
	else
	{
		if(a>b)
		{
			if(a>c)
			{
				printf("%d is max ",a);
			}
			else
			{
				printf("%d is max ",c);
			}
			
		}
		else
		{
			if (b>c)
			{
				printf("%d is max",b);
			}
			else
			{
				printf("%d is max",c);
			}
		}
	}
	
}
