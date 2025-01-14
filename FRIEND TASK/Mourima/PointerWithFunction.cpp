#include <bits/stdc++.h>
using namespace std;
bool point (int * p,int *q )
{   int sum=0;
    sum+=*p+*q;
    if(sum%2==0){
        return true;
    }else{
        return false;
    }
}


int main() {

    int x= 6, y=5 ;
    int *p ;
    int *q;
    p= &x; 
    q=&y;
    if(point(p,q)==true){
    cout<<*p<<"+"<<*q<<"= "<<*p + *q <<" . the sum is even"<<endl;}
   else{
    cout<<*p<<"+"<<*q<<"="<<*p + *q <<" . the sum is odd"<<endl;}
   

   // cout<<5<<endl ;

    
    return 0;
}