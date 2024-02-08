#include<iostream>
using namespace std;
int main()
{
	int n,arr[100],i,j,x;
	cout<<"Enter no of an elements you want in an array:"<<endl;
	cin>>n;
	cout<<"Enter the elements of an array:";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]< arr[j])
			{
				x= arr[i];
				arr[i]=arr[j];
				arr[j]= x;
			}
			
		}
		
	}
	cout<<"Second largest element in an array is:"<<arr[1];
	return 0;

}
