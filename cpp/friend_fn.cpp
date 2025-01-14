#include <iostream>
using namespace std;

class Sample
{
    int a, b, c;
    public: 
        void setVal(){
            a=40;b=70;
        }
        friend float mean(Sample S);
};

float mean(Sample S){
    return float (S.a+S.b)/2.0;
}

int main(){
    Sample X;
    X.setVal();
    cout<<"Value:"<<mean(X)<<"\n";
    return 0;
}