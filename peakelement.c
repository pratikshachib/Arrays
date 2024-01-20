#include<stdio.h>
int main()
{
	int a[50],i,n;
	printf("Enter no of elements you want in an array:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=2;i<n;i++)
	{
		if(a[i]>a[i-1])
		{
			if(a[i]>a[i+1])
			{
				printf("%d is a peakelememt because it is greater than it's neighbours %d and %d",a[i],a[i-1],a[i+1]);
			}
		}
	}
	getch();
}
