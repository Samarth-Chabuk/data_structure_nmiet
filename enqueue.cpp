#include <iostream>
using namespace std;

class Queue
{
private:
    int A[5];
    int front;
    int rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }
    
    void enQueue(int value)
    {
        if (rear == 4)
        {
            cout << "Queue is Full" << endl;
            return;
        }

        if (front == -1)
        {
            front = 0;
        }

        rear++;
        A[rear] = value;

        cout << value << " inserted into queue" << endl;
    }
    
    void deQueue()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is Empty" << endl;
            return;
        }

      

        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }
 
    void display()
    {
        if (front == -1)
        {
            cout << "Queue is Empty" << endl;
            return;
        }

        cout << "Queue: ";

        for (int i = front; i <= rear; i++)
        {
            cout << A[i] << " ";
        }

        cout << endl;
    }
};

int main()
{
    Queue q1;
    int choice;
    int value;

    do
    {
        cout << "\n1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                q1.enQueue(value);
                break;

            case 2:
                q1.deQueue();
                break;

            case 3:
                q1.display();
                break;

            case 4:
                cout << "Exit" << endl;
                break;

            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 4);

    return 0;
}
