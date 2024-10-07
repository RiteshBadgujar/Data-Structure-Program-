#include<iostream>
using namespace std;
int main()
{
	int n , i , j;
	cout<<"Enter the Array Size:";
	cin>>n;
	
	int a[5];
	cout<<"Enter the Array Elemnts :";
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	cout<<"Before Sorted Array Elements :\n";
	for(i=0; i<n; i++)
	{
		cout<<a[i]<<endl;
	}
	
	for(i=0; i<n; i++)
	{
		for( j=i+1; j<n; j++)
		{
			if(a[i] >= a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	cout<<"After Sorted Array Elements :\n";
	for(i=0; i<n; i++)
	{
		cout<<a[i]<<endl;
	}
}
