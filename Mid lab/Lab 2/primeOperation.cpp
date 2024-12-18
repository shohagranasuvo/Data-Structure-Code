#include <bits/stdc++.h>
using namespace std ;

void factorial(int x)
{

    int factorial=1 ;

    for(int i = 1 ;i<=x ; i++)
    {

        factorial*=i;

    }

    cout<<"Factorial of "<<x<<" is ="<<factorial;


}

void checkPrime(int x){

    int count = 0 ;

    if(x<=1)
    {

        cout<<"Not a prime number "<<endl;

        return;

    }

    else {



        for (int i  = 1 ; i<(x/2) ;i++)
        {


            if(x%i==0)

            {

                count++;
            }


        }
        if(count>1)
        {

            cout<<"Not a prime number "<<endl;


        }

        else
        {

            factorial(x);
        }
    }






}


int main(){


    int x ;

    cout<<"Enter a number ";

    cin>>x;

    checkPrime(x);





}