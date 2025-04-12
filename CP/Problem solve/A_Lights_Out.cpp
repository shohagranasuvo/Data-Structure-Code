#include <bits/stdc++.h>
using namespace std;

int main() {
    int  arr[3][3];
    for(int i = 0 ; i<3 ;i++)
    {
        for(int j = 0 ; j<3 ; j++)
        {
            cin>>arr[i][j];
        }
    }

    int mainArr[3][3]={1,1,1,1,1,1,1,1,1};

     for(int i = 0 ; i<3 ;i++)
    {
        for(int j = 0 ; j<3 ; j++)
        {
           if(arr[i][j]%2!= 0)
           {
            // if(i==0 && j ==0)
            // {
                // if(mainArr[i+1][j+1]==1)
                // {
                //     mainArr[i+1][j+1]=0;
                // }
                // else
                // {
                //      mainArr[i+1][j+1]=1;

                // }
                // if(mainArr[i][j+1]==1)
                // {
                //     mainArr[i][j+1]=0;
                // }
                // else
                // {
                //      mainArr[i][j+1]=1;

                // }
                // if(mainArr[i+1][j]==1)
                // {
                //     mainArr[i+1][j]=0;
                // }
                // else
                // {
                //      mainArr[i+1][j]=1;

                // }
          // }

                if(i<3 && i!= 0)
                {
                    if(mainArr[i+1][j]==1)
                {
                    mainArr[i+1][j]=0;
                }
                else
                {
                     mainArr[i+1][j]=1;

                }

                if(mainArr[i-1][j]==1)
                {
                    mainArr[i-1][j]=0;
                }
                else
                {
                     mainArr[i-1][j]=1;

                }

                }
                else if (i>=0 && i!=2)
                {
                     if(mainArr[i+1][j]==1)
                {
                    mainArr[i+1][j]=0;
                }
                else
                {
                     mainArr[i+1][j]=1;

                }

                }

                else if (i<=2 && i!=0)



                if(j<3)
                {


                }
                else if(j>0)
                {

                    
                }

                
                



            

            

            



            

            


           }
        }
    }


    
    
    return 0;
}