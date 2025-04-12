#include <bits/stdc++.h>
using namespace std;

int main() {

    int test  ;
    cin>>test ;
    while (test--)
    {
        int operation , lenght ;
        cin>>operation>>lenght ;

        int arr [ operation][2];
        for(int i = 0 ; i<operation ; i++)
        {
            for(int j = 0 ; j< 2 ;j++)
            {
                cin>>arr[i][j] ;
            }
        }
        int valueX = arr[0][0];
        int valueY =arr[0][1];
        // int locX=arr[0][0]+arr[1][0];
        // int locY=arr[0][1]+arr[1][1];
        int lessX= 0 ;
        int lessY=0 ;
        int  k = 2 ; 
       // int p =2;

        // for(int i=0 ; i<operation-1;i++)
        // {   
        //     //valueX=locX+lenght;
        //     //valueY=locY+lenght ;

        //     // difX =valueX-locX ;
        //     // difY =valueY-locY;

        //     difX = 
           

        //     less += ((difX+difY)*2) ;

        //      locX=locX+arr[k][0];
        //     locY=locY+arr[k][1];

        //     k++ ;



        // }
        int diffX ,diffY ;

        for(int i = 1; i<operation ; i++)
        {
                diffX =(valueX + arr[i][0]) - valueX ;
                diffY =(valueY + arr[i][1]) - valueY ;

                valueX +=arr[i][0];
                valueY+=arr[i][1];
                lessX +=diffX ;
                lessY +=diffY ;



            
        }





        int ans = ((lessX+lessY)*2) +lenght*4 ;
        cout<<ans<<endl;






    }
    
    
    return 0;
}