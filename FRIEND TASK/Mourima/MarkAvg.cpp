#include <bits/stdc++.h>
using namespace std;
void  avg (int arr[][100] ,int row  ,int col )
{

    for(int i=0;i<row;i++){
        int sum= 0 ; 
        for(int j=0;j<col;j++){
            sum += arr[i][j] ;



        }
        double avg = (double)sum/col ; 

        if(avg>= 80)
        {

            cout<<"STUDENT Number "<<i+1 <<"  : Average mark is greater than 80 and mark is "<<avg<<endl ;
        }



        }

}
int main() {
    int row,col;
    cout<<"number of student"<<endl;
    cin>>row;
    cout<<"number of Subject "<<endl;
    cin>>col;
    int arr[100][100];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
         cin>>arr[i][j];
        }
    }
    avg(arr,row ,col );
    
    
    return 0;
}