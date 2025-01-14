#include <iostream>
using namespace std;
class test
{
public:
    int volume(int a);
    double volume(double r, double h);
    long volume(double l, int b, int h);
};

int test::volume(int a)
{
    return (a * a * a);
}
double test::volume(double r, double h)
{
    return (3.14 * r * r * h);
}
long test::volume(double l, int b, int h)
{
    return (l * b * h);
}
int main()
{
    int s1, s2, s3, s4, s5, s6, opt;
    test t;

    cout << "Display the volume";
    cout << "\n1 - Cube\n2 - Cylinder\n3 - Cuboid";
    cout << "\nEnter the option:";
    cin >> opt;
    switch (opt)
    {
    case 1:
        cout << "\nEnter the length of cube:";
        cin >> s1;
        cout << "\nVolume of Cube:" << t.volume(s1);
        break;
    case 2:
        cout << "\nEnter the radius and height of cylinder:";
        cin >> s2 >> s3;
        cout << "\nVolume of Cylinder:" << t.volume(s2, s3);
        break;
    case 3:
        cout << "\nEnter the length,breadth & height:";
        cin >> s4 >> s5 >> s6;
        cout << "\nIn volume of Cuboid:" << t.volume(s4, s5, s6)<<endl;
        break;
    default:
        break;
    }
    return 0;
}
