#include <bits/stdc++.h>
using namespace std;

int main() {
    int test ; 
    cin>>test ; 
    while(test--)
    {

        int x ; 

        cin>>x ;
        int arr [x] ;
        arr[0]=1 ;
        arr[1]=1 ;
        arr[x-1]=1;
        for(int i = 2; i< x-1 ;i++)
        {
            arr[i]= i ;
        }

        for(auto i : arr)
        {
            cout<<i <<" " ;
        }

    }

    
    
    return 0;
}