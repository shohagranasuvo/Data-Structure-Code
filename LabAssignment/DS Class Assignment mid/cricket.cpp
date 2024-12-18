#include<bits/stdc++.h>
using namespace std;

int main()
{

    cout<<"How many over you want to observe = ";
    int over ;
    cin>>over ;
    string arr[over][6];

    cout<<"Score Card :";

    for(int  i= 0 ; i<over ; i++)
    {
        for(int j = 0 ; j <6 ;j++)
        {

            cin>>arr[i][j];



        }
    }

    int miniRunOver=0 ,maxRunOver=0,numberOfMadainOver=0 ,runSum=0,maxRun=0 ,minRun=INT_MAX ;

    for(int  i= 0 ; i<over ; i++)
    { runSum=0;

        for(int j = 0 ; j <6 ;j++)
        {
            if(arr[i][j]!="w")
            {

            int run =stoi(arr[i][j]);
            runSum+=run ;
        
            }

        }

        

        if(runSum==0)
        {
            numberOfMadainOver++;
        }
        else{

        if (maxRun<runSum)
        {
           
            maxRunOver=i ;
            maxRun=runSum;

        }

        if(minRun>=runSum)
        {
            miniRunOver=i ;
            minRun=runSum;
        }
        }
    }

    cout<<"Minimum runs scored in over:"<<miniRunOver+1<<endl;

    cout<<"Maximum runs scored in over:"<<maxRunOver+1<<endl;

    cout<<"Number of maiden over:"<<numberOfMadainOver<<endl;
    

  /*
    1 2 0 0 4 0
w 0 0 2 1 1
0 0 0 0 0 0
1 0 w 2 0 2
0 0 4 4 4 0

*/

   






}

