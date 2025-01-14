#include <iostream>
using namespace std;

class item{
    int num;
    float cost;
    public: 
        void getData(int a,float b);
        void putData(void){
        cout<<"Number:"<<num;
        cout<<"Cost:"<<cost;
    }
};

inline void item::getData(int a,float b){
    num=a;
    cost=b;
}

int main(){
    
    item x;
    cout<<"\nobject x";
    x.getData(10,250.0);
    x.putData();
    item y;
    cout<<"\nobject x";
    y.getData(20,110.50);
    y.putData();
    return 0;
}
