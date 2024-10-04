#include<stdio.h>
int main()
{    
	int size,i;
	printf("Enter size of element : ");
	scanf("%d",&size);

	
	int a[size];
	
	for(i=0;i<size;i++)
	{
		printf("Enter element a[%d]",i+1);
		scanf("%d",&a[i]);
		
	}
	
	for(i=size-1;i>=0;i--)
	{
		printf("%d,",a[i]);
		
		
	}
	
}
