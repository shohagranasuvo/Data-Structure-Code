#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int>vec)
{

    for(int ele : vec)
    {
        cout<<ele<<" ";

    }
    cout<<"\n";


}

void BubbleSort (vector<int> vec)
{ int comparison = 0 ,swap =0 ;

bool swapped;

    for(int i = 0 ; i <vec.size();i++){
          swapped =false;
    for(int j = 0 ; j<vec.size()-i-1 ;j++)
    {

        ++comparison;
       

        if(vec[j]>vec[j+1])
        {
            int temp =vec[j];
            vec[j]= vec [j+1];
            vec[j+1]=temp;
           ++swap ;
           swapped =true ;
        }

    }   
     if(!swapped)
        {
            break ;
        }
        }

     printvec(vec);

    cout<<"Total comparison "<<comparison<<" and total swap = "<<swap ;
}

int main()
{

    cout<<"How many number you want to sort ? "<<endl;
    int x ;
    cin>>x ;

    cout<<"Give me the number for Bubble sort "<<endl;
    vector<int> vec ;

    for(int i = 0 ;i <x ;i++)
    {

        int x;

        cin>>x;
        vec.push_back(x);


    }

    BubbleSort(vec);

    return 0 ;


}