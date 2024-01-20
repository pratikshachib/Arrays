#include<stdio.h>
int main()
{
	int n,a[50],i,j,temp;
	printf("Enter no of elements in an array:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
		printf("Sorted array elements are:");  
	    for(i=0;i<n;i++)
     	{
		printf("%d",a[i]);
	    }
	    return 0;
}
