#include <iostream>
#include<queue>
using namespace std ;
void joinQueue (queue<string>& q)

 { string name  ;
    cout<<"Enter the name : "  ;
    cin>>name ;
    q.push(name) ;
    cout<<"join :"<<name<<endl<<endl ;}

void serve (queue<string> &q)
{
    if(q.empty())
       { cout<<"The Queue is empty\n"<<endl<<endl;
        return ;}
    else
       { cout<<"Serving "<<q.front()<<endl<<endl;
        q.pop();}
}
void display( queue<string> q)
{
    if(q.empty())
        {cout<<"The Queue is empty\n"<<endl;
        return ;}
    else{ 
        cout<<"Current queue : "  ;
  while (!q.empty()) 
   { cout<<q.front()<<" "; 
    q.pop();
  }
  cout<<endl;}}

int main()
{ 
    int option ;
    queue<string> q ; 
    do{
       cout<<"Select one option :\n1.Join the queue;\n2.Serve\n3.Display\n4.close programme\n"; 
        cin>>option ; 
        if(option==1)
           { joinQueue(q);}
        else if (option==2)
        {serve(q);}  
        else if(option ==3 )
            {display(q);}
        else if(option==4 )
            {cout<<"The programme will be close very soon thanks you " ;}
       }while(option!= 4);
     return  0 ; 

}