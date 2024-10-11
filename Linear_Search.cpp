#include<iostream>
using namespace std;
int main()
{
	int a[5]={50,40,20,30,10};
	int n=5;
	int x;
	int temp;
	int position=0;
	int i;
	
	
	cout<<"Enter the Search Number :";
	cin>>x;
	
	for(i=0; i<n; i++)
	{
		if(a[i] == x)
		{
			temp=1;
			position=i+1;
			break;
		}
	}
	
	if(temp == 0)
	{
		cout<<"Array is Not Found";
	}
	else
	{
		cout<<x <<" Number Found Position :"<<position;
	}
}
