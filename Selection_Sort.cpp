#include<iostream>
using namespace std;
int main()
{
	int a[5]={50,30,40,10,20};
	int n=5 , i , j;
	
	cout<<"Before Sorted Array Elements  :\n";
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
