#include <iostream>
using namespace std;

class Code
{
    int code;
    static int count;

public:
    void setCode(void)
    {
        code = ++count;
    }
    void showCode(void){
        cout<<"Object number:"<<code<<"\n";
    }
    static void showCount(void){
        cout<<"Count:"<<count<<"\n";
    }
};

int Code::count=0;
int main(){
    Code t1,t2;
    t1.setCode();
    t2.setCode();
    Code::showCount();
    t1.showCode();
    t2.showCode();
    Code t3;
    t3.setCode();
    Code::showCount();
    t3.showCode();
}
