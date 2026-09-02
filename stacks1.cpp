#include <iostream>
using namespace std;

#define MAX 5

class Stack
{
    int stack[MAX];
    int top;

public:

    Stack()
    {
        top = -1;
    }

    void push(int value)
    {
        if (top == MAX - 1)
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            top++;
            stack[top] = value;
            cout << value << " pushed" << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            cout << stack[top] << " popped" << endl;
            top--;
        }
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            for (int i = top; i >= 0; i--)
            {
                cout << stack[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.pop();

    s.display();

    return 0;
}

