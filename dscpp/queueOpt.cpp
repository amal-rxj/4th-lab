#include <iostream>
#define SIZE 5
using namespace std;

class queueop
{
    int Q[SIZE], i, front, rear;

public:
    queueop()
    {
        front = -1;
        rear = -1;
    }
    bool isFull();
    bool isEmpty();
    void enqueue(int elem);
    void dequeue();
    void display();
};

bool queueop::isFull()
{
    if (rear - front == SIZE)
        return true;
    else
        return false;
}

bool queueop::isEmpty()
{
    if (front == rear)
    {
        front = -1;
        rear = -1;
        return true;
    }
    else
        return false;
}

void queueop::enqueue(int elem)
{
    rear++;
    Q[rear] = elem;
}

void queueop::dequeue()
{
    int item;
    front++;
    item = Q[front];
    cout << "Dequeued element:" << item;
}

void queueop::display()
{
    cout << "Queue Elements:";
    for (i = front + 1; i <= rear; i++)
    {
        cout << Q[i] << " ";
    }
}

int main()
{
    int choice, elem;
    char ch;
    queueop q;
    do
    {
        cout << "Enter the operator\n";
        cout << "1 Enqueue\n2 Dequeue\n3 Display\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            if (q.isFull())
                cout << "Queue is full";
            else
            {
                cout << "Enter elements:";
                cin >> elem;
                q.enqueue(elem);
            }
            break;
        case 2:
            if (q.isEmpty())
                cout << "Queue is Empty";
            else
                q.dequeue();
            break;
        case 3:
            q.display();
            break;

        default:
            cout << "Wrong Input";
            break;
        }
        cout << "\n Do you want to continue(y/n):";
        cin >> ch;
    } while (ch == 'Y' || ch == 'y');
}