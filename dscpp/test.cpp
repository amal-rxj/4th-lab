#include <iostream>
using namespace std;
class queue
{
  int q[15],i,front,rear;
  public:
    queue()
      {
      front=-1;
      rear=-1;
      }
      bool is full();
      bool is empty();
      void enqueue(int elem);
      void dequeue();
      void disp();
};
    bool queue::isfull()
{
  if(rear-front==size)
   return true;
 else
   return false;
}   
    bool queue::isempty()
{
  if (rear==front)
  {
    rear=-1;
    front=-1;
    return true;
  }
  else
    return false;
}
    void queue::enqueue(int elem)
{
    rear++;
    q[rear]=elem;
}
    void queue::deqeue()
{
    int item;
    front++;
    item=q[front];
    cout<<"deleted item+"<<item;
}    
    int main()
{
    int choice,elem,size;
    cout<<"enter the size of queue";
    cin>>size;
    queue q(size);
    char ch;
    do
    {
      cout<<"enter the operation 1.enqueue 2.dequeue 3.display:";
      cin>>choice;
      switch(choice)















