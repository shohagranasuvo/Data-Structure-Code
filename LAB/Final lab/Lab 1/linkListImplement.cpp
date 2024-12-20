#include<iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
}*nodeptr;
nodeptr head=NULL,curr;
void insert(int n)
{
    int value;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        nodeptr newnode= new Node;
        newnode->data=value;
        newnode->next=NULL;
        if(head==NULL)
             head=newnode;
        else
            curr->next=newnode;
        curr=newnode;
    }
}
void insertAtFirst(int value)
{
    nodeptr newnode=new Node;
    newnode->data=value;
    newnode->next=head;
    head=newnode;
}
void insertAtLast(int value)
{
    nodeptr ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    nodeptr newnode=new Node;
    ptr->next=newnode;
    newnode->next=NULL;
    newnode->data=value;
}
void insertBefore(int value, int p)
{

    if (head == nullptr) {
        cout << "List is empty. Cannot insert before " << p << ".\n";
        return;
    }
    nodeptr previous =head ;
    nodeptr current = previous->next ;

    if(previous->data == p)
    {
        insertAtFirst(value);
        return ;
    }
    

   while (current != nullptr && current->data != p)
    {
        previous=current ;
       current=  previous-> next ;

    }

    if (current == nullptr) {
        cout << "Value " << p << " not found in the list.\n";
        return;
    }


    nodeptr newNode = new Node ;
    newNode ->data = value ;

    
    newNode ->next =current ;
    previous->next =newNode ;

    


}
void insertAfter(int value,int p)
{

     if (head == nullptr) {
        cout << "List is empty. Cannot insert before " << p << ".\n";
        return;
    }

    nodeptr current = head ;


    while(current->data !=p && current !=nullptr )
    {
       current = current->next;
      

    }

     if (current == nullptr) {
        cout << "Value " << p << " not found in the list.\n";
        return;
    }
    

    nodeptr newNode = new Node ;

    
   
    

    newNode ->data = value ;
    newNode ->next =current->next;

     current ->next =newNode ;

}
void insertBetween(int value,int p,int q)
{
    nodeptr ptr=head;
    while(ptr->data!=p&&ptr->next->data!=q&&ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    if(ptr->data==p&&ptr->next->data==q)
    {
        nodeptr newnode=new Node;
        newnode->next=ptr->next;
        ptr->next=newnode;
        newnode->data=value;
    }
    else
        cout<<p<<" and "<<q<<" Not found !!!";
}
void first_node_dlt()
{
	nodeptr ptr= head;
	head = ptr->next;
	delete(ptr);
}
void Last_node_dlt()
{
	nodeptr ptr= head, dptr;
	while(ptr->next->next!=NULL)
		ptr=ptr->next;
	dptr = ptr->next;
	ptr->next = NULL;
	delete(dptr);
}
void middle_node_dlt(int item)
{

}
void display()
{
    nodeptr ptr=head;
    cout<<"stored data : ";
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
void maxxdata()
{
    nodeptr ptr=head;
    int maxx=ptr->next->data;

    while(ptr!=NULL)
    {
        if(maxx<ptr->data)
           {
            maxx=ptr->data;
           }
            ptr=ptr->next;
    }
       cout<<"max value is : "<<maxx;
}
void minndata()
{
    nodeptr ptr=head;
    int minn=ptr->next->data;

    while(ptr!=NULL)
    {
        if(minn>ptr->data)
           {
            minn=ptr->data;
           }
            ptr=ptr->next;
    }
       cout<<"min value is : "<<minn;
}
int main()
{
    int n,data,ch;
    cout<<"Enter number of node you want to insert : ";
    cin>>n;
    insert(n);
    display();
    cout<<endl;
    bool check = true ;
while(check)
{

    cout<<endl<<endl;
    cout<<"-----LINK LIST MENU-----"<<endl;
    cout<<"1. Insert at first"    <<endl;
    cout<<"2. Insert at last"     <<endl;
    cout<<"3. Insert before"      <<endl;
    cout<<"4. Insert after"       <<endl;
    cout<<"5. Insert in between"  <<endl;
    cout<<"6. Delete first node"  <<endl;
    cout<<"7. Deleting last data" <<endl;
    cout<<"8. Deleting any data"  <<endl;
    cout<<"9. max data"           <<endl;
    cout<<"10.min data"           <<endl;
    cout<<"11.CLOSE"              <<endl;

    cout<<"enter your choice : "<<endl;
    cin>>ch;

    switch(ch)
    {

case 1:
    {
    cout<<"Enter data to insert at first : ";
    cin>>data;
    insertAtFirst(data);
    display();
    cout<<endl;
    break;
    }
case 2:
    {
    cout<<"Enter data to insert at last : ";
    cin>>data;
    insertAtLast(data);
    display();
    cout<<endl;
    break;
    }
case 3:
    {
    int P,Q;
    cout<<"insert before-----"<<endl;
    cout<<"Enter position : ";
    cin>>P;
    cout<<endl;
    cout<<"Enter data to insert before P : ";
    cin>>data;
    insertBefore(data,P);
    display();
    cout<<endl;
    break;
    }
case 4:
    { int P;
    cout<<"insert after------"<<endl;
    cout<<"Enter position : ";
    cin>>P;
    cout<<endl;
    cout<<"Enter data to insert after P : ";
    cin>>data;
    insertAfter(data,P);
    display();
    cout<<endl;
    break;
    }
case 5:
    {
        int P,Q;
    cout<<"insert between-----"<<endl;
    cout<<"Enter positions : ";
    cin>>P>>Q;
    cout<<endl;
    cout<<"Enter data to insert in between P and Q : ";
    cin>>data;
    insertBetween(data,P,Q);
    display();
    cout<<endl;
    break;
    }
case 6:
    {
   cout<<"delete first node"<<endl;
   first_node_dlt();
   cout<<"deleting 1st data"<<endl;
   display();
   cout << endl;
   break;
    }
case 7:
    {
   cout<<"delete last---"<<endl;
   Last_node_dlt();
   cout<<"deleting last data"<<endl;
   display();
   cout << endl;
   break;
    }
case 8:
    {
   cout<<"which data want to delete : "<<endl;
   cin>>data;
   middle_node_dlt(data);
   cout<<"deleting data"<<endl;
   display();
   cout << endl;
   break;
    }
case 9:
    {
        maxxdata();
        cout << endl;
        break;
    }
case 10:
    {
        minndata();
        cout << endl;
        break;
    }

    case 11:
    {
        check=false ;
    }


    }
    }
}
