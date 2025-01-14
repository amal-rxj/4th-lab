#include <iostream>
using namespace std;

class new_delete
{
    int size, i,n;
    int *arr;

public:
    void new_operator(void);
    void read(void);
    void display();
    void delete_op(void);
};

void new_delete::new_operator(void)
{
    cout << "Enter the size of array:";
    cin >> size;
    cout << "\nCreating a array of size " << size<<" ...";
    arr = new int[size];
    cout << "\nDynamic memory allocation for array is completed.";
}
void new_delete::read(void)
{
    cout << "\nEnter the element of array:";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
void new_delete::display(void)
{
    cout << "The array elements are:";
    for (i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }
}
void new_delete::delete_op(void)
{
    delete arr;
    cout << "\nDeallocation of memory is successfull.";
}

int main()
{
    new_delete n;
    n.new_operator();
    n.read();
    n.display();
    n.delete_op();
    return 0;
}
