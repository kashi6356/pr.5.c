#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j, r ,c;
	printf("enter number of row:");
	scanf("%d",&r);
	printf("enter number of columns:");
	scanf("%d",&c);
	
	int arr[r][c];
	printf("enter element of 2d array :%d\n");
	printf("\n");
	for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter element arr[%d][%d]\n",i,j);
		}
		printf("\n");
	}
	printf("\n");
	int largest=arr[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			if(arr[i][j]>largest)
			{
			  largest=arr[i][j];	
			}
		}
		printf("\n");
	}
	printf("\n");
	printf("enter largest element in the 2d array:%d\n",largest);
	
}
