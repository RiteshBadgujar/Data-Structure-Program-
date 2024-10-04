#include<iostream>
using namespace std;
int main()
{
	int a[5]={40,30,10,50,20};
	int n=5;
	int i;
	int j;
	
	cout<<"Before sorting element ";
	for(i=0; i<n; i++)
	{
		cout<<a[i]<<endl;
	}
	for(int i=0; i<n-1; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if (a[j]>=a[j+1])
			{
			int temp =a[j];
			a[j]=a[j+1];
		    a[j+1]=temp;
	  		}
		}
	}
	cout<<"After sorting element :\n";
	for(i=0; i<n; i++)
	{
		cout<<a[i]<<endl;
	}
	
}
