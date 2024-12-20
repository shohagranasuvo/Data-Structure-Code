#include<iostream>
using namespace std;
 
typedef struct Node
{
    int data;
    struct Node *next,*prev;
}*nodeptr;
nodeptr head=NULL,tail=NULL;
void insert(int n)
{
    int value;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        nodeptr newnode= new Node;
        newnode->data=value;
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL&&tail==NULL)
        {
           head=newnode;
           tail=newnode;
        }
        else
        {
            tail->next=newnode;
            newnode->prev=tail;
        }
        tail=newnode;
    }
}
void insertAtFirst(int value)
{
    //write your code here
    Node* newNode = new Node;
	newNode->data = value;
	newNode->next = NULL;
	newNode->prev = NULL;
	if (head == NULL && tail == NULL)
	{
		head = newNode;
		tail = newNode;
	}
	else {
 
		newNode->next = head;
		head->prev = newNode;
		head = newNode;
 
	}
}
void insertAtLast(int value)
{
    //write your code here
        nodeptr newnode= new Node;
        newnode->data=value;
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL&&tail==NULL)
        {
           head=newnode;
           tail=newnode;
        }
        else
        {
            tail->next=newnode;
            newnode->prev=tail;
        }
        tail=newnode;
}
 
void insertAtK(int value,int p)
{
   nodeptr curr = new Node ;
   curr =head;
   if(curr==nullptr)
   {
    cout<<"NO DATA FOUND "<<endl ;
    return ;
   }

   while (curr != nullptr && curr->data != p )
   {
    curr=curr->next;
    

   }

   

   if(curr==nullptr )
   {

    cout<<p<<" DATA NOT FOUND "<<endl;
    return ;

   }
   nodeptr newNode =new Node ;

   newNode->data = value ;
   newNode->next = curr ;
   newNode->prev = curr->prev ;
   curr->prev->next = newNode ;
   curr->prev =newNode ;

}
 
void deletFirst()
{
    //write your code here
    if(head==NULL && tail==NULL)
        cout <<"\nLinked List Empty\n";
    else if(head->next !=NULL)
       {nodeptr temp=head;
       head->next->prev = NULL;
       head= head->next;
       delete temp;
       }
    else
    {
        head= NULL;
        tail = NULL;
    }
 
}
void deletLast()
{
    //write your code here
    if(head==NULL && tail==NULL)
        cout <<"\nLinked List Empty\n";
    else if(head->next !=NULL)
       {    nodeptr temp=tail;
            tail->prev->next = NULL;
            tail = tail->prev;
       }
    else
    {
        head= NULL;
        tail = NULL;
    }
}
void deletAtK(int p)
{
    nodeptr curr =new Node ;
    curr=head ;
    while(curr->data!= p && curr!=nullptr )
    {

        curr=curr->next;

    }

    curr->prev->next=curr->next ;
    curr->next->prev = curr->prev ;
    curr->next=nullptr ;
    curr->prev =nullptr ;



}
int Search(int data)
{
    //write your code here
    int position =0;
    bool found=0;
    nodeptr ptr=head;
    while(ptr!=NULL)
    {
 
        position++;
        if(ptr->data==data)
        {
            found =true;
            return position;
        }
        else
            ptr = ptr->next;
    }
    if(found == 0)
    {
        return 0;
    }
}
void displayF()
{
    if(head==NULL && tail==NULL)
    {
        cout <<"\nLinked List Empty\n";
    }
    else{
    nodeptr ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;}
}
void displayB()
{
    if(head==NULL && tail==NULL)
    {
        cout <<"\nLinked List Empty\n";
    }
    else{nodeptr ptr=tail;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->prev;
    }
    cout<<endl;}
}
int main()
{
    int n;
    cout<<"Enter number of nodes : ";
    cin>>n;
    insert(n);
    cout<<endl;
    cout<<"1. Insert at first "<<endl;
    cout<<"2. Insert at last "<<endl;
    cout<<"3. Insert at k position "<<endl;
    cout<<"4. Delete at first"<<endl;
    cout<<"5. Delete at last"<<endl;
    cout<<"6. Delete at k position"<<endl;
    cout<<"7. Forward Display "<<endl;
    cout<<"8. Backward Display "<<endl;
    cout<<"9. Search "<<endl;
    while(1)
    {
        int query;
        cout<<"Choose a menu: "<<endl;
        cin>>query;
        if(query==1)
        {
            int data;
            cout<<"Provide a value to insert at first: "<<endl;
            cin>>data;
            insertAtFirst(data);
        }
        else if(query==2)
        {
            int data;
             cout<<"Provide a value to insert at last: "<<endl;
            cin>>data;
            insertAtLast(data);
        }
        else if(query==3)
        {
            int data,k;
             cout<<"Provide a value to insert at k position: "<<endl;
            cin>>data>>k;
            insertAtK(data,k);
        }
        else if(query==4)
        {
            deletFirst();
        }
        else if(query==5)
        {
            deletLast();
        }
        else if(query==6)
        {
            int data;
            cout<<"Provide a value of k position: "<<endl;
            cin>>data;
            deletAtK(data);
        }
        else if(query==7)
        {
            cout<<"The list is in forward order: "<<endl;
            displayF();
        }
        else if(query==8)
        {
            cout<<"The list is in backward order: "<<endl;
            displayB();
        }
        else if(query==9)
        {
            int data;
            cout<<"Provide a value to search: "<<endl;
            cin>>data;
            int status = Search(data);
            if(status)
            {
                 cout<<"Element Found\n"<<endl;
            }
            else
            {
                 cout<<"Element Not Found\n"<<endl;
 
            }
        }
    }
    return 0;
 
}