#include<iostream>
using namespace std;
int queue[5],front,rear=-1,x,i;
int n=5;

void insert()
{
	if(rear == n-1)
	{
		cout<<"Queue is Overflow.\n\n";
	}
	else
	{
		if(front ==-1)
		{
			front = 0;
		}
		else
		{
			cout<<"Enter the Queue Elements :";
			cin>>x;
			
			rear++;
			queue[rear]=x;
		}
	}
}

void deleted()
{
	if(front==-1)
	{
		cout<<"\nQueue is Empty";
	}
	else
	{
		cout<<endl;
		cout<<"Queue is Element is Deleted :"<<queue[front]<<endl;
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front++;
		}
	}
}

void display()
{
	if(front == -1)
	{
		cout<<"Queue is Empty.";
	}
	else
	{
		for(int i=0; i<n; i++)
		{
			cout<<"Queue Elements is Display :"<<queue[i]<<endl;
		}
	}
}
int main()
{
	insert();
	insert();
	insert();
	insert();
	insert();
	insert();
	display();
	
	deleted();
	deleted();
	deleted();
	deleted();
	deleted();
	deleted();
}
