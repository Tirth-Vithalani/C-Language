#include <stdio.h>
main()
{
	int row,col;
	printf("Enter row of array : ");
	scanf("%d",&row);
	printf("Enter column of array : ");
	scanf("%d",&col);
	
	
	int a[row][col],j,i;
	printf("\n\nInput of array\n\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
	int lar=0;
	printf("\n\nOutput of array\n\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(a[i][j]>lar)
			{
				lar = a[i][j];
			}
		}
	}
	printf("%d is large value in matrix ",lar);	
}
	
