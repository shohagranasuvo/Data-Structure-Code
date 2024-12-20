#include <bits/stdc++.h>
#define ll long long int 
using namespace std ;
template <typename T>

class Stack{
    public:
    T *arr ;
    int nextIndex ;
    int capacity ;
    public:
    Stack()
    {
        capacity=4; 
        arr=new T[capacity];
        nextIndex = 0 ;
    }

    int size()
    {
        return capacity ;
    }
    bool isEmpty()
    {
        if(capacity==0)
        {
            return true ;
        }
        else
        {
            return false ;
        }
    } 

    void push (T ele)
    {
        if(nextIndex==capacity)
        {
            T *newArr = new T[2*capacity];
            for(int i = 0 ; i<capacity ;i++)
            {
                newArr[i] =arr[ i]; 
            }
            delete[] arr ;
            arr=newArr ;
            capacity = 2*capacity ;

        }
        arr[nextIndex]=ele ;
        nextIndex++ ;
    }

    void pop()
    {
        if(capacity== 0)
        {

            cout<<"Stack  empty " <<endl;

            return ;

        }
       nextIndex-- ;

    }
    T top ()
    {
        if(isEmpty)
        {
             cout<<"Stack  empty " <<endl;
             return 0   ;
        }
        return  arr[nextIndex-1];

    }
    void display()
    {
        for(int  i = nextIndex-1 ;i >=0; i--)
        {
            cout<<arr[i]<<endl ;
        }
    }


    





};

int main()
{
    Stack<string>s;
    s.push ("SHUVO ");
    s.push(" RANA ");
    s.push("SHOHAG");
    s.display();



   

    
    return 0 ;
}