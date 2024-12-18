#include <bits/stdc++.h>
using namespace std ;
struct tree{

    int data ;

    tree* left ;
    tree* right;

    tree(int a)
    {
        this -> data = a; 
        this -> left = nullptr;
        this -> right = nullptr;
    }

};

tree* createNode(int a )
{

    tree* temp = new tree(a);



    return temp ;
   



}

void printNode(tree * node){

    cout<<"Node data is "<<node->data<<endl;

     cout<<"Node left address is "<<&node->left<<endl;

     cout<<"Node right address is "<<&node->right<<endl;




}


int main(){

    tree*temp =  createNode(5);

   
    printNode(temp);




}