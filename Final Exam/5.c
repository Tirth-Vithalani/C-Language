#include <stdio.h>

int main() 
{
    int i;
    int lar,size;
    
    printf("Enetr size of array : ");
    scanf("%d",&size);

   
 
    int a[size];


    
    for (i = 0; i < size; i++)
	 {
    	printf("Enter %d elements : ", i+1);
        scanf("%d", &a[i]);
    }

   
    lar = a[0];


    for (i = 1; i < size; i++)
	 {
        if (a[i] > lar)
		 {
            lar = a[i];
        }
    }

   
    printf("The largest element is: %d\n", lar);

    return 0;
}

