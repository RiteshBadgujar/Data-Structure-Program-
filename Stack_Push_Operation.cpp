#include<iostream>
using namespace std;

int stack[5];
int top=-1, n=5;

void push(int x)
{
	if(top==n-1)
	{
		cout<<"Stack is Overflow ";
	}
	else
	{
		top++;
		stack[top]=x;
    }
}

void display()
{
	if(top <= 0)
	{
		cout<<"Stack is Empty";
	}
	else
	{
		cout<<"Stack is Push the Elements :"<<endl;
		for(int i=top; i>=0; i--)
		{
			cout<<stack[i]<<endl;
		}
	}
}

int main()
{
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
    display();
	
}
