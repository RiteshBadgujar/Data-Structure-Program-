#include<iostream>
using namespace std;
int stack[5],top=-1,n=5,x;

void push(int x)
{
	if(top == n-1)
	{
		cout<<"Stack is Overflow \n\n.";
	}
	else
	{
		top++;
		stack[top]=x;
	}
}

void pop()
{
	if(top == -1)
	{
		cout<<"Stack Elements is Empty.\n\n";
	}
	else
	{
		cout<<"Stack Elements is Deleted :"<<stack[top]<<endl;
		top--;
	}
}

void display()
{
	if(top <= 0)
	{
		cout<<"Stack is Overflow \n\n.";
	}
	else
	{
		cout<<"Enter the Stack Elements :";
		for(int i=top; i>=0; i--)
		{
			cout<<stack[i]<<endl;
		}
	}
}
int main()
{
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	display();
	push(60);
	
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
}
