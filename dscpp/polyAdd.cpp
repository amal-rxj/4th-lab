#include <iostream>
#include <cmath>
using namespace std;
class polynomial
{
    public:int a[50],b[50],c[50],i,j,k,m,n,total;
    public: void read1();
            void read2();
            void display1();
            void display2();
            void poly();
            void display3();
};
void polynomial::read1(){
    cout<<"enter the 1st polynomial:";
    cout<<"\n how many terms";
    cin>>m;
    for(i=0;i<(2*m);i=i+2)
    {
        cout<<"enter teh coefficient";
        cin>>a[i];
        cout<<"enter the exponential";
        cin>>a[i+1];
    } 
}
void polynomial::read2(){
    cout<<"enter teh 2nd polynomial";
    cout<<"\n how many terms";
    cin>>n;
    for(i=0;i<(2*n);i=i+2)
    {
        cout<<"enter teh coefficient";
        cin>>b[i];
        cout<<"enter the exponential";
        cin>>b[i+1];
    } 

}
void polynomial::display1(){
    cout<<"first polynomial is ";
    for(i=0;i<(2*m);i=i+2)
    {
        cout<<a[i]<<"x^"<<a[i+1]<<" + ";
    }
    cout<<a[i]<<"x^"<<a[i+1]<<;
}

