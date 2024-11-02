#include <bits/stdc++.h>
using namespace std;

class stack1
{

public:
int test ;
int *arr;
int size;

stack1 (int size)
{
     this -> test =-1;
     arr = new int [size];
     this->size=size;




}

 void push(int element)

{
    if( test<size)
    {
        test++;

        arr[test]=element;

        cout<<"push successful"<<endl;


    }
    



}

void pop ()
{

    if (test >-1)
    {

        test--;
         cout<<"pop successful"<<endl;


    }



}

int top()

{
    if (test>-1)
    {

         cout<<"top successful"<<endl;

        return arr[test];
    }



}

void empty()
{

    if (test==-1)
    {

        cout<<"It's now empty"<<endl;


        
    }

    else 
    {

         cout<<"It's not empty"<<endl;

       
    }



}




  
};




int main()
{

    stack1 st(5);

    st.push(4);
    st.push(5);
    st.pop();
    st.empty();
    cout<<st.top()<<endl;
    st.pop();
    st.empty();
    






}