#include <bits/stdc++.h>
using namespace std;

int main() {

    int test ;
    cin>>test ;
    while(test--)
    {
        int a ,b ;
        cin>>a >>b ;
         set<int> s;
         int d =b ,count=0  ;
         int r =0 ;
         map<int, int> freq_map; 
        for(int i= 0 ; i< a ;i++)
        {
            int x;
            cin>>x ;
            freq_map[x]++;
            s.insert(x);
        }

        for(auto i : freq_map)
        {
            if(i.second <= d)
            {
                d-=i.second ;
                count++ ;


            }
        }
        

       
    
       
       

        int result =s.size()-count  ;
        cout<<result<<endl;




    }
    
    
    return 0;
}