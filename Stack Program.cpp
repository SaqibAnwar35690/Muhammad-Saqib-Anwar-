#include <iostream>
using namespace std;

class Stack 
{
    private:
    	
        int Top;
        int arr[10];
    
    public:
    
        Stack() 
		{
            Top = -1;
        }
		   
        void push(int val)
		{
            if (Top >= 9) 
			{
                cout << "Stack full" << endl;
                cout<<"_________________________________________"<<endl;
                return;
            }
            arr[++Top] = val;
            cout << val << " Pushed to the stack." << endl;
            cout<<"_________________________________________"<<endl;
        }
 
        void pop() 
		{
            if (Top < 0) 
			{
                cout << "Stack Empty" << endl;
                cout<<"_________________________________________"<<endl;
                return;
            }
            int popVal = arr[Top--];
            cout << popVal << " Popped from the stack." << endl;
            cout<<"_________________________________________"<<endl;
        }
 
        void Display() 
		{
            if (Top < 0) 
			{
                cout << "Stack is empty" << endl;
                cout<<"_________________________________________"<<endl;
                return;
            }
            cout << "Stack elements are:" << endl;
            for (int i = Top; i >= 0; i--)
                cout << arr[i] << endl;
            cout<<"_________________________________________"<<endl;
        }
};

int main() 
{
    Stack s;
    int option, val;
    
    do 
	{
        cout << "Select an option:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;

        cin >> option;

        switch(option)
		{
            case 1:
                cout << "Enter a value to push:" << endl;
                cin >> val;
                s.push(val);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.Display();
                break;
            case 4:
                cout << "Program End." << endl;
                cout<<"_________________________________________"<<endl;
                break;
            default:
                cout << "Invalid option." << endl;
                cout<<"_________________________________________"<<endl;
        }
    }
	while (option != 4);

    return 0;
}
