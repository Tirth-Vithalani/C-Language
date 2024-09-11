#include <stdio.h>
main()
{
	int row,col;
	printf("Enter row of array : ");
	scanf("%d",&row);
	printf("Enter column of array : ");
	scanf("%d",&col);
	
	
	int a[row][col],j,i;
	printf("\n\ninput of array\n\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
	printf("\n\nOutput of array\n\n");
	int r,sum=0;
	printf("Enter row for sum : ");
	scanf("%d",&r);
	
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(r==i)
			{
				printf("%d",a[i][j]);
				sum+=a[i][j];
			}
		}
		
	}
	
	int c,sum1=0;
	
	printf("\nEnter r:");
	scanf("%d",&r);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(i==c)
			{
				printf("%d",a[j][i]);
				sum1 += a[j][i];
			}
			}	}
	
	printf("\nsum %d\n",sum);
	printf("\nsum %d\n",sum1);
}

