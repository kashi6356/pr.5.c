#include <stdio.h>
#include<conio.h>

void main()
{
    int a[max_size]; 
    int i, n;

    
    printf("enter size of  array : ");
    scanf("%d", &n);

    
    printf("enter elements  array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nallnegative elements  array  : ");
    for(i=0; i<n; i++)
    {
        
        if(a[i] < 0)
        {
            printf("%d\n", a[i]);
        }
    }

    
}
