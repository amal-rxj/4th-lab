#include <iostream>
using namespace std;

class Bsearch
{
    int a[10], i, j, n;
public:
    void read();
    void search();
};

void Bsearch::read()
{
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the array elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void Bsearch::search()
{
    int elem, l = 0, h = n - 1, flag = 0, pos = 0, mid;
    cout << "Enter the element to be searched: ";
    cin >> elem;

    while (l <= h)
    {
        mid = ((l+h) / 2);  
        pos++;  

        if (elem == a[mid])  
        {
            flag = 1;
            break;
        }
        else if (elem < a[mid]) 
        {
            h = mid - 1;
        }
        else  
        {
            l = mid + 1;
        }
    }

    if(flag == 1){
        cout << "Number of comparisons: " << pos << endl;
        cout << "The element is found at position: " << mid + 1 << endl;
    }else{
        cout << "The element is not found." << endl;
    }
}

int main()
{
    Bsearch bs;
    bs.read();
    bs.search();
    return 0;
}

