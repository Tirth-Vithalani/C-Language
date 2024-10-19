#include<stdio.h>
main()
{
	int n,i,ans=1;
	
	printf("Enter N : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		
		ans*=i;
	
		
	}
	
	printf("%d",ans);
	
	
	
	
	
}
