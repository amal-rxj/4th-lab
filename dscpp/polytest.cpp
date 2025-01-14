#include <iostream>
#include <cmath>
using namespace std;

class polyEval
{
    int a[100]; 
    int m;      

public:
    void read();
    void eval();
    void display();
};

void polyEval::read()
{
    cout << "Enter the number of terms in the polynomial: ";
    cin >> m;
    if (m <= 0 || m > 50)
    {
        cout << "Invalid number of terms. Please enter a positive number less than 50.\n";
        return;
    }

    for (int i = 0; i < 2 * m; i += 2)
    {
        cout << "Enter the coefficient for term " << (i / 2 + 1) << ": ";
        cin >> a[i];
        cout << "Enter the exponent for term " << (i / 2 + 1) << ": ";
        cin >> a[i + 1];
    }
}

void polyEval::eval()
{
    if (m <= 0)
    {
        cout << "\nNo polynomial to evaluate.\n";
        return;
    }

    int sum = 0, x;
    cout << "\nEnter the value of x: ";
    cin >> x;

    for (int i = 0; i < 2 * m; i += 2)
    {
        sum += a[i] * pow(x, a[i + 1]);
    }

    cout << "\nThe evaluated sum is: " << sum << endl;
}

void polyEval::display()
{
    if (m <= 0)
    {
        cout << "\nNo polynomial to display.\n";
        return;
    }

    cout << "\nThe polynomial is: ";
    for (int i = 0; i < 2 * m; i += 2)
    {
        cout << a[i] << "x^" << a[i + 1];
        if (i + 2 < 2 * m)
            cout << " + ";
    }
    cout << endl;
}

int main()
{
    polyEval pe;
    pe.read();
    pe.display();
    pe.eval();
    return 0;
}

