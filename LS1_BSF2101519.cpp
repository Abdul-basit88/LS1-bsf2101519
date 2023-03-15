#include<iostream>
using namespace std;
int stack[10], n = 10, top = -1,counter=0,i=0;
int arraypop1[10];
int arrpop[10];
void push(int val)
{
	if (top >= n - 1)
		cout << "Stack Overflow" << endl;
	else
	{
		top++;
		stack[top] = val;
	}
}


void pop()
{
	
	if (top <= -1)
		cout << "Stack Underflow" << endl;
	else
	{
		cout << "The popped element is " << stack[top] << endl;
		
		
	do
	{
		arraypop1[i]=stack[top];
		i++;
		break;	
	}
	    while(i<n);
		
		top--;
		counter++;
		
	}
}

void Pope1()
{
	cout << "Pope No are " << endl;
	for (int i = 0; i < counter; i++)
	{
		cout << arraypop1[i] << "     "<<endl;
	}
}


void Isfull()
{
	
	if (top >= 9)
		cout << "Stack is full" << endl;
	else
		cout << " Stack is not full"<<endl;
}

void Isempty()
{
	if (top <0)
		cout << "Stack is Empty" << endl;
	else
		cout << "Stack is not empty"<<endl;
}

void Even()
{
	cout << "\n List of Even numbers are : ";
	for (int j = 0; j <=top; j++)
	{
		if (stack[j] % 2 == 0)
			cout << stack[j] << "     "<<endl;

	}
}


void display()
{
	if (top >= 0)
	{
		cout << "Stack elements are:";
		for (int i = top; i >= 0; i--)
			cout << stack[i] << " ";
		cout << endl;
	}
	else
		cout << "Stack is empty";
}

int main()
{
	int ch, value;
    cout << "ABDUL BASIT";
    
    
    
	cout << "\n1) Push in stack" << endl;
	cout << "2) Pop from stack" << endl;
	cout << "3) Check stack  full" << endl;
	cout << "4) Check stack empty" << endl;
	cout << "5) Printing even numbers in stack" << endl;
	cout << "6) Poping elements are" << endl;
	cout << "7) Display stack" << endl;
	cout << "8) Exit" << endl;
	do
	{
		cout << "Enter choice: " << endl;
		cin >> ch;
		switch (ch) {
		case 1: {
			cout << "Enter value to be pushed:" << endl;
			cin >> value;
			push(value);
			break;
		}
		case 2: {
			pop();
			break;
		}

		case 3: {

			Isfull();
			break;
		}
		case 4: {
			Isempty();
			break;

		}

		case 5: {
			Even();
			break;
		}
		case 6: {
			  Pope1();
			  break;
		}
		case 7: {
			display();
			break;
		}
		case 8: {
			cout << "Exit" << endl;
			break;
		}
		default: {
			cout << "Invalid Choice" << endl;
		}
		}
	} while (ch != 8);
	return 0;
}
