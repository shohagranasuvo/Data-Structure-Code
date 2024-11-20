#include<bits/stdc++.h>
using namespace std;

class node{
 public:
    int data ;
    node  *right ;
    node *left ;

    node(int data)
    {
        this -> data =data ;
        this -> left = NULL ;
        this -> right =NULL ;
    }


};

node* buildTree(node* &root )
{
    cout<<"Enter data for node = ";
    int data; 
    cin>> data ;
    root = new node (data);
    
    cout<<data <<" has left node ? y/n ? "<<endl;

    char exit ;
    cin>>exit ;


    if(exit=='Y'|| exit =='y')
    {
         cout<<"Enter data for left of  "<<data<<endl;
   

     root->left =  buildTree (root->left);
    }

    //char exit ;
  

    cout<<data <<" has right node ? y/n ? "<<endl;
    cin>>exit ;

    if(exit=='Y'|| exit=='y')
    {

   

    cout<<"Enter data for right  of "<<data<<endl;
    

    root->right =  buildTree(root->right);
    }

    return root;




}


void treeTravel(node* root)
{   cout<<"Here is the tree :  ";

    queue<node*> q ;
    q.push(root);
    q.push(NULL);


    while (! q.empty()){

        node * temp = q.front() ;

        q.pop();

        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);

            }
        }

        else {


        cout<<temp->data<<" ";

        if(temp->left)
        {
            q.push(temp->left);
        }

        if(temp->right)
        {
            q.push(temp->right);
        }
        }



    }


}


void InOrder(node* root) //LNR
{ 

    

    if(root==NULL)
    {
        return ;
    }
    InOrder(root->left);
    cout<<root->data<<"  ";
    InOrder(root->right);

    


}


void PreOrder(node* root) //NLR
{
   

    if(root==NULL)
    {
        return ;
    }
    cout<<root->data<<" ";
    PreOrder(root->left);
    
    PreOrder(root->right);

    


}

void PostOrder(node* root) //LRN
{ 

    if(root==NULL)
    {
        return ;
    }
   
    PostOrder(root->left);
     PostOrder(root->right);
     cout<<root->data<<" ";
    
   

    


}

void IntretionInorder(node* root)
{

    if (root == NULL) return;


    stack<node*> st ;

    
    node* curr = root;
    st.push(curr);

    while(!st.empty()||curr!=NULL)
    {
        
       
        while(curr!=NULL  )
        {
          
            st.push(curr);
            curr=curr->left ;
        }
        

      
        
        curr=st.top();
      
       cout<<curr->data<<" ";

        st.pop();

        

    

      
        
        curr=curr->right;
       
       


    }






}





int main()
{
    node* root = NULL ;

    buildTree(root);

    treeTravel(root) ;
    cout<<"In order traversal :  ";
    InOrder(root);
     cout<<"Pre order traversal :  ";
    PreOrder(root);
    cout<<"Post order traversal :  ";
    PostOrder(root);

     cout<<"In  order traversal by itretion :  ";
     IntretionInorder(root);


    // 1 y 3 y 7 n n y 11 n n y 5 y 17 n n n 



}