#include <bits/stdc++.h>
using namespace std ;


void evencounter (int a , int b)
{

    cout<<"Odd number between "<<a <<" to "<<b <<" = ";
   // a++;

    for(int  i= a;i<=b ;i++)
    {

        vector<int > oddVec;

        if (i% 2!= 0)
        {

           // cout<<i<<" ";
            oddVec.push_back(i);



        }


        for(int ele : oddVec)
        {

            cout<<ele<<" ";



        }



    }




}


 int main(){

    int a , b;

    cout<<"Enter number of strting point ";

    cin>>a;

     cout<<"Enter number of last point ";

    cin>>b;

    evencounter(a,b);








}
    

