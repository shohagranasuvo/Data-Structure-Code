#include<iostream>
using namespace std;
#define MAX 50

int arr[MAX];
int top=-1;





void push (int ele){

    if(top==MAX-1)
    {

        cout<<"OverFlow";


    }

    else 
    {

        top++;

        arr[top]=ele; 

    }

 

}

void pop ()
{

    if (top==-1)
    {
        cout<<"Empty";
       // return ;
    }

    else{

        int e =arr[top];

        top--;
        //return e ;

    }

}

void peek()
{

    for(int i = top ; i>=0 ;i--)
    {

        cout<<arr[i]<<" ";
    }
}





int main()
{ 

    push(5);
    push(10);
    pop();
    push (1000);
    peek(); 

    









}