#include <iostream>
using namespace std;

class stackop
{
    int stack[100], top, size;

public:
    stackop(int s)
    {
        size = s;
        top = -1;
    }

    bool isEmpty();
    bool isFull();
    void push(int val);
    void pop();
    void display();
};

bool stackop::isFull()
{
    if (top == size - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool stackop::isEmpty()
{
    if (top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void stackop::push(int val)
{
    top++;
    stack[top] = val;
    cout << "Pushed " << val << " onto the stack." << endl;
}

void stackop::pop()
{
    int item = stack[top];
    top--;
    cout << "Popped element: " << item << endl;
}

void stackop::display()
{
    if (isEmpty())
    {
        cout << "\nThe stack is empty." << endl;
    }
    else
    {
        cout << "\nStack elements: ";
        for (int i = 0; i <= top; i++)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int choice, size, elem;
    cout << "Enter th size of stack:";
    cin >> size;
    char ch;
    stackop s(size);
    do
    {
        cout << " \n1.Push \n2.Pop \n3.Display \nEnter the operator:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            if (s.isFull())
            {
                cout << "Stack is full";
            }
            else
            {
                cout << "Enter the elements:";
                cin >> elem;
                s.push(elem);
            }

            break;
        case 2:
            if (s.isEmpty())
            {
                cout << "Stack is empty";
            }
            else
            {
                s.pop();
            }
            break;
        case 3:
            s.display();
            break;

        default:
            cout << "Wrong input";
            break;
        }
        cout << "\nDo you want to continue(y/n):";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
}
