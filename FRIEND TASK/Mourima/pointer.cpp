#include <bits/stdc++.h>
using namespace std;

int main() {

    int mou=500 ;
    int *p =&mou ;
    int  ** q =&p ;
    int *** r =&q ;
    (mou)++ ;

    cout<<"VALUE of mou "<<mou<<"\n Value of p "<<*p <<"\n value of q "<<**q<<" \n value of r "<<***r<<endl ;
    
    
    return 0;
}