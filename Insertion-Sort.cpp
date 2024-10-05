#include<iostream>
using namespace std;
int main()
{
	int a[5]={50,30,10,20,40};
	int n=5 , i , j, temp;
	
	cout<<"Before Sorting Array Elements  :\n";
	for(i=0; i<n; i++)
	{
		cout<<a[i]<<endl;
	}
	
	for(i=1; i<=n-1; i++)
	{
		temp=a[i];
		j=i-1;
		
		while(temp<a[j] && j>=0)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
	
	cout<<"After Sorting Array Element :\n";
	
	for(i=0; i<n; i++)
	{
		cout<<a[i]<<endl;
	}
}
