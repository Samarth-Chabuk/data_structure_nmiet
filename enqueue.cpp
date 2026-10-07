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
 void enqueue(int value)
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
void dequeue()
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
  Queue q;
  int choice;
  
  do
  {
  cout<<"1. Enqueue";
  cout<<"2. Dequeue";
  cout<<"3. Display";
  
  switch(choice)
  {
    case 1:q1.enQueue();
            break;
    case 1:q1.deQueue();
            break;
    case 1:q1.display();
            break;            
  }

    return 0;
}  
