#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> vec ,res;
     cout<<"Give per min usage value " ;
    for(int i = 0 ; i<60 ; i++)
    {

        int  x ;
         cout<<"Give value for min "<<i+1 <<" =  " ;
        cin>>x ;
        vec.push_back(x);


    }
    for(int i =0 ; i<50 ;i++)
    {   int sum = 0 ;
        int j = 0 ;
        int k = i ;
        while(j!=10)
        {
            sum+=vec[k];


            j++ ;
        }

        res.push_back(sum);
       

    }

    int m =res[0];
    int maxindex=0;
    for(int i = 1 ; i<50;i++)
        {
            if(m<res[i])
            {
                m=res[i];
                maxindex = i ;
            }



            
        }

        cout<<"10 consecutive max  minutes is = "<<m<<" and it from "<<maxindex+1<<" to "<<maxindex+10;






return 0 ;
//1 2 3 4 5 6 7 8 9 10 11 12 13 14 16 17 18 19 20 21 22 23 24 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 56 57 58 59 60

}