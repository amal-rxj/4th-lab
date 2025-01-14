#include <iostream>
using namespace std;

class item{
    int number;
    float cost;
    public: void getData(int a,float b);
    void putData(void)
    {
        cout<<"Number="<<number;
        cout<<"Cost="<<cost;
    }
};

inline void item::getData(int a,float b){
    number=a;
    cost=b;
}

int main(){
    item x;
    cout<<"\n Object X";
    x.getData(100,299.5);
    x.putData();
    item y;
    cout<<"\n Object Y";
    y.getData(200,157);
    y.putData();
    return 0;
}