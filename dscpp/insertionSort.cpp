#include <iostream>
using namespace std;

class insertion{
    int a[50], i, j, n;
public:
    void read();
    void sort();
    void display();
};

void insertion::read() {
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "\nEnter the elements of the array:\n";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void insertion::sort() {
    int temp, counter = 0;
    for (i = 1; i < n; i++) {  
        j = i;
        while (j > 0 && a[j - 1] > a[j]) {
            counter++;  
            temp = a[j - 1];
            a[j - 1] = a[j];
            a[j] = temp;
            j--;
        }
    }
    cout << "\nThe number of comparisons: " << counter << endl;
}

void insertion::display() {
    cout << "\nThe array elements after insertion sort are:\n";
    for (i = 0; i < n; i++) {
        cout << a[i] << "\t";  
    }
    cout << endl;
}

int main() {
    insertion obj;
    obj.read();
    obj.sort();
    obj.display();
    return 0;
}

