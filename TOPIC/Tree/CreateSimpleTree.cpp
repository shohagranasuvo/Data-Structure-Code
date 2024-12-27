#include <bits/stdc++.h>
using namespace std;
template <typename T>
class TreeNode{
     public:
    T data ;
    vector<TreeNode<T>*> children ;

   // public:
        TreeNode(T data)
    {
        this->data=data ;

    }
   

};

void  printTree(TreeNode<int>* Root)
    {
        if(Root==nullptr)
        {
            cout<<"tree is Null "<<endl;
          //  return ;
        }
        else 
        {
            cout<<Root->data<<" : ";
            for(int i = 0 ; i<Root->children.size();i++)
            {
                cout<<Root->children[i]->data<<",";
            }
            cout<<endl;
            for(int i = 0;i< Root->children.size();i++)
            {
                printTree(Root->children[i]);
            }

        }

    }

int main() {
    TreeNode<int>* Root = new TreeNode<int> (5);
    TreeNode<int>* n1 = new TreeNode<int> (10) ;
    TreeNode<int>* n2 = new TreeNode<int> (30) ;
    Root->children.push_back(n1);
    Root->children.push_back(n2);

    printTree(Root);
    

    
    
    return 0;
}