#include <stdio.h>
void main()
{
	int av,bv;
	printf("Enter value of A : ");
	scanf("%d",&av);
	printf("Enter value of B : ");
	scanf("%d",&bv);	
	
	int a=av,b=bv,c;
	
	c=a+b;
	a=c-a;
	b=c-b;
	
	printf("A:%d\n",a);
	printf("B:%d",b);
	
	
	
}
