#include <bits/stdc++.h>
using namespace std ;
int main()
{

    int row , col ;
    cout<<"Give the row ";
    cin>>row ;
     cout<<"Give the col ";
    cin>>col ;


    int arr[row][col];

    cout<<"Give the array ";
    for(int  i = 0  ;i<row ;i++)
    {

        for (int j  = 0  ; j<col; j++)

        {
            cout<<"ENTER ROOM  "<<i+1<<" and it  "<<j+1 <<" number element = ";
            cin>>arr[i][j];



        }    
}

vector<int > vec ;

for(int i = 0 ;i<row ;i++)
{

   int  max= 0 ;

   int sum = 0 ;
  // bool check =true;

    for(int j = 0 ;j<col;j++)
    {
        if(arr[i][j]==1)
        {
            // if(arr[i][j]==1)
            // {

            //     check=false;

            // }

            if(sum>max)
            {

                max= sum ;
               
                sum=0;
            }



        }
       else  if(arr[i][j]==0)
        {

            sum++ ;
            
            
        }



    }

   
    if(sum>max)
    {

         vec.push_back(sum);



    }
    else
    {
         vec.push_back(max);
    }




}

int c= 1;


for(int ele:vec)
{

    cout<<"For room number "<<c <<" continuous max time is "<<ele*30<<" min \n";
    c++;
}
    






}