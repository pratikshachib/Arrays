#include<iostream>
using namespace std;
int main()
{
	int n,arr[100],i;
	cout<<"Enter no of elements in an array:";
	cin>>n;
	cout<<"Enter the elements:";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		if(arr[i] > arr[i-1])
		{
		
		}
		else
		{
		  return 0;
		
		}
	}
	return 1;
}
