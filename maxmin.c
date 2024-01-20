#include<stdio.h>
int main()
{
	int a[50],n,i,max,min;
	printf("Enter no of elements you want in an array:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
		    min=a[i];
		}
	}
	printf("The maximum element in an array is: %d\n",max);
	printf("The minimum element in an array is: %d",min);
	return 0;
}
