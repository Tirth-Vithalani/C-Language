#include <stdio.h>
main()
{
	int size;
	printf("Enter size of array : ");
	scanf("%d",&size);
	
	int a[size],i;
	printf("\n\nInput of array\n\n");
	for(i=0;i<size;i++)
	{
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
		
	}
		printf("\n\nOutput of array\n\n");
	for(i=0;i<size;i++)
	{
		if(a[i]<0)
		printf("%d",a[i]);
		
	}
	
	

}
