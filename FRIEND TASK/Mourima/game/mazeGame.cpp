#include <bits/stdc++.h>
using namespace std;

int main() {

   int row,  col ;
   cout<<"Enter maze row ";
   cin>>row ;
   cout<<"Enter maze col ";
   cin>>col ;

   int arr [row][col];

   arr[0][0]=3 ;
   arr[row-1][col-1]=4 ;

   for(int i = 0 ; i < row ;i++)
   {
    for(int j=0 ; j<col; j++)
    {
        if((i== 0 && j == 0) ||(i==row-1  && j == col-1) )
        {

            continue;
        }
        arr[i][j]=1 ; 

    }
   }

   for(int i = 0 ; i < row ;i++)
   {
    for(int j=0 ; j<col; j++)
    {
        cout<<arr[i][j]<<" " ; 
    }
    cout<<endl;
   }

   
     int j =1 ;

   for(int i = 0 ; i<row ; i++)
   {
    if (col ==3 && i==1)
    {
        continue;
        
    }

    if((i== 0 && j == 0) ||(i==row-1  && j == col-1) )
        {

            continue;
        }
    int ran = rand() % col ; 
     while(ran== j -1 || ran== j+1)
     {
        ran =rand()%col ;
     }
  

     j = ran ;


    
    arr[i][j] = 2 ;



   }

   cout<<"Here the path :" <<endl ;

   for(int i = 0 ; i < row ;i++)
   {
    for(int j=0 ; j<col; j++)
    {
        cout<<arr[i][j]<<" " ; 
    }
    cout<<endl;
   }


   int s = 0 , h = 0 ;

   while(arr[row-1][col-1]!=3)
   {

    char c ;
    cout<<"For going left press l or right press r or up press u or down d  = ";

    cin>>c ;

    if( c=='r')
    {
       
        if(arr[s][h+1]==2 )
        {
            cout<<"Here Obstacle .try another way "<<endl ;
            continue;

        }
        if(h+1 >col+1)
        {
            cout<<"Out of bound "<<endl ;
            continue;

        }
         arr[s][h]=1 ;
        arr[s][h+1]=3 ;
        h+=1 ;

        for(int i = 0 ; i < row ;i++)
   {
    for(int j=0 ; j<col; j++)
    {
        cout<<arr[i][j]<<" " ; 
    }
    cout<<endl;
   }

   




    }
    








   }

  
    return 0;
}