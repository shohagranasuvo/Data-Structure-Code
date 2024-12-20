#include<iostream>
using namespace std;

int *Stack=nullptr;
int topIndex = -1;
int capacity=2 ;
void ini()
{
    Stack = new int [capacity];
  //  top =Stack ;
}

void resize()
{
   int newCapacity = capacity*2 ; 
   int * newStack = new int[newCapacity];
    for(int i = 0  ; i<=capacity ; i++)
    {
        newStack[i]=Stack[i];

    }

   // Stack  ;

   delete [] Stack ;
  

   Stack =newStack ;

   // top = Stack + capacity;


    capacity = newCapacity ;

}

void push (int ele)
{

    if(topIndex==capacity -1  )
    {
        resize();
    }

   


    Stack[++topIndex]=ele;
   // top++ ;
}


void pop()
{

    if(topIndex==-1)
    {
        cout<<"Stack empty";
    }

    Stack [topIndex]=-1;
   cout<<"POP VALUE +"<< Stack [topIndex--];

}

void peek()
{
    int curr =topIndex ;

    for(int  i =curr  ; i>=0 ;i--)
    {

        cout<<Stack[i]<<" " ;
    }
}

int main()
{     ini();
    push(5);
    push(6);
    push(50);
    peek();



}