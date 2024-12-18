#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x ;
    cin>>x ;
    bool check = false ,dothave =false ;

    for(int i = 0  ; i<x.length() ; i++)
    {
        if(x.at(i)=='7'||x.at(i)=='4'||x.at(i)=='.')
        {
            check=true ;

            if(x.at(i)=='.')
            {
                dothave=true ;
            }
        }
        else
        {
            check = false ;
            break ;
        }
    }

    if(check== true)
    {

         cout<<"YES"<<endl;


    }

    else if(dothave== false )
    {
       
       
       
       
        if(stoi(x)%7== 0 || stoi(x)%4 == 0 || stoi(x)%44 == 0||stoi(x)%47 == 0|| stoi(x)%74 == 0 ||stoi(x)%444 == 0|| stoi(x)%777 == 0||stoi(x)%477 == 0||stoi(x)%744 == 0||stoi(x)%747 == 0||stoi(x)%474 == 0)
    {
        cout<<"YES"<<endl;
    }
    else 
    {

        cout<<"NO"<<endl;

    }





    }
    else
    {

         cout<<"NO"<<endl;


    }

   









    // double num  =stod (x); 
    // double intPart ;

    //   double fracPart = modf(num, &intPart);

    //   if()



    

     





    return  0 ;
}