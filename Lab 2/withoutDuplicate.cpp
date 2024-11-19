#include <bits/stdc++.h>
using namespace std;

int main()
{
     int a ,count=0;

    cout<<"Enter array size ";
    cin>>a ;
    int arr[a];

     for (int i= 0 ; i<a ; i++)
    {

        cout<<"Enter "<<i+1 <<" number elementof 1 st = ";

        cin>>arr[i];
    }

    vector <int> vec;
    bool check= true ;

    for(int i = 0 ; i<a; i++)
    {
        int x= arr[i];

         for(int j = i+1; j<a; j++)
         {
            // if(j==a-1)
            // {
            //     vec.push_back(arr[i]);
            //     check =false;
            // }
            if(x !=arr[j])
            {
                check=true;

                // cout<<arr[i]<<" ";
                
               // vec.push_back(arr[i]);

               
            }
            else
            {
                check=false;
                count++;
                break;
            }

           
               



         }

          if(check==true)
            {

                vec.push_back(arr[i]);

            }
         



    }


    cout<<"\n";

    if(count<=1)
    {

        cout <<"Array already unique!"<<endl;

    }
    else{
    for(int ele : vec)
    {

        cout<<ele<<" ";
    }}



}
