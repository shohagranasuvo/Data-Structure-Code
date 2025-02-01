#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data ;
    Node * left ;
    Node *right ;

    Node(int data )
    {
        this->data= data  ;
        left = nullptr ;
        right  = nullptr ; 

    }
  


};

Node* InsertBSTData(Node * &root  , int data)
{

    if(root==nullptr)
    {
         root = new Node(data) ;
        return root ; 

    }
    else if(data > root->data)
    {
        root->right= InsertBSTData(root-> right , data) ;
    }
    else
    {
        root->left=InsertBSTData(root->left ,data);
    }

return root ;
}
void levelOrderTraversal(Node * root)
{ 
    if (root==nullptr)
    {
        cout<<"No data "<<endl ;
        return ;
    }
    queue<Node*>q ;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        
    }

    


}
void inorder (Node *node)
{
    if(node== NULL)
    {
        return ;


    }
    inorder(node->left ) ;
    cout<<node->data <<" ";
    inorder(node->right) ;
    
}





  void takeInput(Node* &root)
    { int data ;
    cin>>data ;

        while(data!=-1)
        {
           root = InsertBSTData (root , data);
            cin>>data ;


        }
        
    }
    void findSamllest()
    {
        
    }

    void findlarge()
    {
        
    }


int main() {
    Node* root =NULL;
    cout<<"Give the input :";
    takeInput(root);
    
    
    return 0;
}