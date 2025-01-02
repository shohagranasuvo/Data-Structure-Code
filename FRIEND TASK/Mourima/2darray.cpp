#include <bits/stdc++.h>
using namespace std;

int main() {
    int row ,col;
    cout<<"ROW AND COL ";
    cin>>row>>col;
    int arr[row][col];
    int sumlower=0 ,sumupper = 0  ;

    for(int i=0 ; i<row ;i++)
    {
        for(int j = 0 ; j<col ;j++)
        {
            cin>>arr[i][j];
        }
    }


    for(int i = 0 ; i<row  ; i++)
    {
        for(int  j = 0  ; j <col ;j++)
        {
            if(i>j)
            {
                sumlower+=arr[i][j];
            }
            if(i<j)
            {
                sumupper+=arr[i][j];
            }


        }
    }

    if(sumlower==sumupper)
    {
        cout<<"Both sum are equal the value is = "<<sumlower<<endl;
    }
    else if(sumlower > sumupper)
    {
        cout<<"Sumlower is large and value = "<<sumlower<<" \n The value :" ;
         for(int i = 0 ; i<row  ; i++)
    {
        for(int  j = 0  ; j <col ;j++)
        {
            if(i>j)
            {
                cout<<arr[i][j]<<" ";
            }
            

        }


    }}
    else if(sumlower < sumupper)
    {
        cout<<"Sum upper is large "<<endl ;

     cout<<"Sumupper is large and value = "<<sumupper<<" \n The value :" ;
         for(int i = 0 ; i<row  ; i++)
    {
        for(int  j = 0  ; j <col ;j++)
        {
            if(i<j)
            {
                cout<<arr[i][j]<<" ";
            }
            

        }}
    }


    
    
    return 0;
}