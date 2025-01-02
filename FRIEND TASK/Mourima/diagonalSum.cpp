#include <bits/stdc++.h>
using namespace std;
int sum(int arr[][100],int row,int col)
{int dia=0;
 for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==j){
                dia+=arr[i][j];
            }

}
}return dia;
}



int mou(int arr[][100],int row,int col)
{int a=0,b=col-1,dia=0;
 for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==a && j==b){

                dia+=arr[i][j];
                a++;
                b--;
            }

}
}return dia;
}




int main() {
    int arr[100][100],row,col;
    cout<<"enter row and col"<<endl;
    cin>>row>>col;
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        cin>>arr[i][j];
        }
    }

    int result=sum(arr,row,col);
    int res=mou(arr,row,col);
    cout<<"diagonal sum is: "<<result<<"\n oposite diagonal sumis:"<<res<<endl;
    return 0;
}