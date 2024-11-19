#include<bits/stdc++.h>
using namespace std;
void printvec(const vector<int> &vec)
{

    for(int ele : vec)
    {
        cout<<ele<<" ";

    }
    cout<<"\n";


}

void insertionSort( vector<int>& vec)
{
    int comparison= 0 ,swap = 0 ;

    for(int  i = 1 ;i<vec.size();i++)
    {

        int j = i-1 , key=vec[i];
        

        while ( j>= 0  && vec[j]> key  )
        {  
             cout<<"Comparison : "<<++comparison<<endl;
            cout<<"Swap number  = "<< ++swap<<endl ; 
            
           // int temp = vec[j];
            
            vec[j+1]=vec[j];
           // vec[k]=temp;
            j--;
           

        }

        vec[j+1]=key ;
         printvec(vec);






    }



}


int main()
{

    cout<<"How many number you want to sort ? "<<endl;
    int x ;
    cin>>x ;

    cout<<"Give me the number for  Insertion Sort "<<endl;
    vector<int> vec ;

    for(int i = 0 ;i <x ;i++)
    {

        int y;

        cin>>y;
        vec.push_back(y);


    }

insertionSort(vec);
}