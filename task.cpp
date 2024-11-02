#include <bits/stdc++.h>
// #include<string>
using namespace std;

int  divide(string x,long long y )
{

    int size= x.length();

    int number=0;


    for(int i = 0 ; i<size ; i++)
    {

       

        char a =x[i];

        if (a=='-')
        {


            continue;



        }

        int part = a - '0';


       number= ((number *10)+part)%y;

       














    }

   return number;





}





int main()
{

    int test;
    cin>>test;

    int count=1;


    while(count!=test+1){

    string x;

    long long y;

    cin>>x>>y;

    int z=divide(x,y);

     if(z==0)
    {


        cout<<"Case "<<count<<": divisible"<< endl;
    }

    else
    {

        cout<<"Case "<<count<<": not divisible"<< endl;


    }



    




count++;



}



}
