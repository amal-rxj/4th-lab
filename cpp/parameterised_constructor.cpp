#include <iostream>
using namespace std;

class code
{
        int id;
	public:code(){
}              code(int a){
        id=a;
}              code(code &x){
        id=x.id;  
}
	      void display(){
	cout<<id<<"\n";
	}
};
int main(void){
	code a(100);
	code b(a);
	code c=a;
	code d;
	d=a;
	cout<<"\n id of a:";a.display();
	cout<<"\n id of b:";b.display();
	cout<<"\n id of c:";c.display();
	cout<<"\n id of d:";d.display();
	return 0;
}
