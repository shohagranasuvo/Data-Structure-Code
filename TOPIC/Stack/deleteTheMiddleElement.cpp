#include <bits/stdc++.h>
using namespace std;

void deletemiddle(stack <int> & st , int count ,int size)
{

    if(size/2==count)
    {


        st.pop();
        return;




    }

    int number =st.top();

    st.pop();

    deletemiddle(st , count+1 , size);

    st.push(number);






}

int main()
{
    deque <int >d ={1,2,3,4,5,6,7,8};


    stack <int,deque<int>> st(d);
    int count =0 ;
    int size =st.size();

    deletemiddle(st ,count, size);

    vector<int> arr(size-1);

    int i = size-2;

    while(!st.empty()){
        


      

      
        arr[i]=(st.top());
        i--;
        st.pop();




      }

      for(int j = 0 ; j<=size-2 ;j++)
      {

        cout <<arr[j]<<" ";




      }

      

        






    }









