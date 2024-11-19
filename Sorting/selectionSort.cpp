#include <bits/stdc++.h>
using namespace std;

void printvec(vector<int>vec)
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
            cout<<"Comparison : "<<++comparison<<endl;

            if(vec[j]<vec[min])
            {
                min =j;
            }

        }

        if(min!=i)
        {

        cout<<"Swap :"<<++swap<<endl;

        int temp = vec[i];

        vec[i]=vec[min];

        vec[min]=temp;
        printvec(vec);
        }






    }


}

int main()
{

     cout<<"How many number you want to sort ? "<<endl;
    int x ;
    cin>>x ;

    cout<<"Give me the number for Selection sort "<<endl;
    vector<int> vec ;
     for(int i = 0 ;i <x ;i++)
    {

        int x;

        cin>>x;
        vec.push_back(x);


    }

    selectionSort(vec);





}