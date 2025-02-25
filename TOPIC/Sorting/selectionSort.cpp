#include <bits/stdc++.h>
using namespace std;

void printvec(const vector<int>&vec)
{

    for(int ele : vec)
    {
        cout<<ele<<" ";

    }
    cout<<"\n";


}


void selectionSort(vector<int> vec)
{

    int comparison= 0 ,swap = 0 ;

    for(int i = 0 ; i<vec.size();i++)
    {
        int min =i;
        for(int j =i+1 ;j<vec.size();j++)
        {
           ++comparison;

            if(vec[j]<vec[min])
            {
                min =j;
            }

        }

        if(min!=i)
        {

        ++swap;

        int temp = vec[i];

        vec[i]=vec[min];

        vec[min]=temp;
       
        }

        








    }

    cout<<"The sorted array is   : ";
    printvec(vec);
    cout<<"Total Number of comparison "<<comparison<<"\nTotal Number of swap "<<swap;


}

int main()
{

     cout<<"How many number you want to sort ? "<<endl;
    int x ;
    cin>>x ;

    cout<<"Give me the number for Selection sort "<<endl;
    vector<int> vec ;

   // vec ={50,60,44,222,15,24,63,57,59,88};


     for(int i = 0 ;i <x ;i++)
    {

        int y;

        cin>>y;
        vec.push_back(y);


    }

    selectionSort(vec);





}