#include <bits/stdc++.h>
using namespace std;

class queueq {
    public :
     int front =-1 ;
     int rear =-1 ;
     int sizea =5 ;
     int arr [5];



void enqueue (int data  )
{
   if(rear==-1 && front ==-1)
   {
    rear =(rear+1)% sizea;
    front =(front+1)%sizea ; 
    arr[rear]=data ;
   }
   else if ( ((rear+1)%sizea) != front ) {
    rear =(rear+1)% sizea ;
    arr[rear]=data ;
   }
   else if (( (rear+1)%sizea) == front)
   {
    cout<<"Full queue"<<endl;

   }

}

void dequeue ( )
{
    if(front==-1 && rear ==-1)
    {
        cout<<"Queue is empty "<<endl;
        return ;
    }
    if(front==rear)
    {
        front=-1 ;
        rear =-1 ;
        return ;
    }


    front =(front+1)%sizea ;

    


}
void print ()
{
    for(int i =front ;i<=rear ;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

};


int main() {

    queueq q ;
    q.enqueue(5 );
    q.enqueue(6) ;
    q.enqueue(7) ;
    q.dequeue();

    q.print();
    q.enqueue(9) ;
    q.print();

   
    
   







    
    
    return 0;
}