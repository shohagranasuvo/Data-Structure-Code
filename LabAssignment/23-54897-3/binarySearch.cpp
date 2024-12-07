#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cout<<"Enter array size ";
    cin>>x; 
    int arr [x];

    for(int i = 0  ; i<x ; i++)
    {
        cout<<"Enter element number "<<i+1<<" = ";
        cin>>arr[i];

    
    }

    sort(arr,arr+x);
    int item ;

    cout<<"Which number want to find = ";
    cin>>item ;

    bool check =true ;
    int low =arr[0];
    int high =arr[x-1];

    int mid =low+((high-low)/2);
    

    while(low<=high )
    {

        if(arr[mid]==item)
        {
            cout<<item<<" Found at index "<<mid<<endl;
            check=false ;
            break ;
        }
         else if(arr[mid]>item)
        {
            high = mid-1;
            mid=low+((high-low)/2) ;
        }

         else if(arr[mid]<item)
        {
            low = mid+1;
            mid=low+((high-low)/2) ;
        }


        
    
    }
    if(check==true)
    {

        cout<<"Did not found ";

    }


}
