#include <iostream>
using namespace std;

void transposematrix(int matrix[][100], int transpose[][100],int row,int col)
{
     for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        transpose[j][i]=matrix[i][j];
    }
  }

}
void EvenNumbers(int matrix[100][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] % 2 == 0) {
                cout << matrix[i][j] << " ";
            }
        }
    }
    cout << endl <<endl<<endl ;
}

void oddNumbers(int matrix[100][100], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (matrix[i][j] % 2 != 0) {
                cout << matrix[i][j] << " ";
            }
        }
    }

}


void modifyMatrix(int matrix[100][100], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (matrix[i][j] % 2 != 0) {

                matrix[i][j] *= 5;
            }
            else if (matrix[i][j] % 2 == 0) {
                matrix[i][j] *= 4;
            }
        }
    }
}

void print(int matrix[][100],int row,int col)
{
    for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<matrix[i][j]<<" ";
    }cout<<endl;
  }
  cout<<endl<<endl<<endl;


}
int main()
{ int row,col;
cout<<"enter the number of rows and cols: "<<endl;
cin>>row>>col;
int matrix[100][100];int transpose[100][100];
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>>matrix[i][j];
    }
  }
  cout<<"Main  matrix"<<endl;
   print(matrix,row,col);


   cout<<"transpose matrix\n"<<endl;
   transposematrix(matrix,transpose,row,col);
   print(transpose ,col ,row);

  
    modifyMatrix(transpose,row,col);
    cout<<"Here are the modified matrix :\n";
    print(transpose,col,row);
    cout<<"Even number"<<endl;
    EvenNumbers(transpose,row,col);

    cout<<"odd number"<<endl;
    oddNumbers(transpose,row,col);

    return 0;
}