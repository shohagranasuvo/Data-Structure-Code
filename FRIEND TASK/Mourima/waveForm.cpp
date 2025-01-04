#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"Give row ";
    int row ,col ;
    cin>>row;

    cout<<"Give row ";


    cin>>col;

    int arr[row][col];
    cout<<"NOW ENTER THE MATRIX :"<<endl;

    for(int i = 0 ; i<row ;i++)
    {
        for(int j = 0 ;j<col ;j++)
        {
            cin>>arr[i][j];
        }
    }
    int j =0 ;
    cout<<"Here are the beautiful wave pattern :"<<endl;
     for(int i = 0 ; i<col ;i++)
    {
        if(i%2==0)
            {
                j=0 ;
                while(j!=row){
                    cout<<arr[j][i]<<" ";
                    j++;


                }
                //cout<<endl;

                


            }
            if(i%2!=0)
            {
                j=row-1 ;
                while(j!=-1)
                {
                    cout<<arr[j][i]<<" ";
                    j--;
                }
                // cout<<endl;

            }

            


        
       
        }



    //write the world with code .best of luck .
    
    
    return 0;
}