#include <iostream>
using namespace std;

int arrsum(int arr[])
{

    cout<<"Programme running...";
    int sum = 0 ;

    for(int i = 0 ; i<17 ; i++)
    {

        sum+=arr[i];

        



    }

    return sum ;
}

int  forLoop()
{


}

int main(){
   int  sum= 0 ,x=0,y=0,count =0  ;
   int odd=1 ;
   int arr[17];

    for(int i = 0 ; i<17 ;i++)
    {   

        
        arr[i]=1 ;

        
    

    }

    bool check = true;



    


    while(check){
    for(int i = x ; i<17 ;i++)
    {   

        
     for(int j = y ; j<17 ;j++)
    {   

        cout<<"Programme running...\n";

        
        arr[j]=odd ;
        odd+=2;
        if(arrsum(arr)==533)
        {

            check=check ;

            cout<<"possible";

            break;


        }

        if(odd>533)
        {
            y=x ;
            odd =1 ;
            if(count==17)
            {
                x=0;
                count =0;


            }

        }

        
    

    }

        
    

    }}







}