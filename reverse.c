#include<stdio.h>
int main()
{
	int n,a[50],i;
	printf("Enter no of elements you want in an array:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	printf("Reversed array is:");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
	return 0;
	
}
