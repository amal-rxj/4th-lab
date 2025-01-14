#include <iostream>
#include <cmath>
using namespace std;

class polyEval
{
    int a[50], i, m;

public:
    void read();
    void eval();
    void display();
};

void polyEval::read()
{
    cout << "Enter the polynomial";
    cout << "\nHow many terms:";
    cin >> m;
    for (i = 0; i < 2 * m; i = i + 2)
    {
        cout << "Enter the coefficient:";
        cin >> a[i];
        cout << "\nEnter the exponential:";
        cin >> a[i + 1];
    }
}

void polyEval::eval()
{
    int sum = 0, x;
    cout << "\nEnter the value of x:";
    cin >> x;
    for (i = 0; i < (2 * m); i = i + 2)
    {
        sum = sum + a[i] * pow(x, a[i + 1]);
    }
    cout << "Sum=" << sum;
}

void polyEval::display()
{
    cout << "\nPolynomial is ";
    for (i = 0; i < (2 * m)- 2; i = i + 2)
    {
        
        cout << a[i] << "x^" << a[i + 1] << " + ";
    }
    cout << a[i] << "x^" << a[i + 1];
}

int main()
{
    polyEval pe;
    pe.read();
    pe.display();
    pe.eval();
    return 0;
}
