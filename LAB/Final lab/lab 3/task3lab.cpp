#include <iostream>
using namespace std;

class Node
{
    public: 
    int data ;
    Node* next ;
   
   
    Node ()
    {
        this ->data ;
        this-> next=nullptr;
    }

    Node (int data)

    {

        this ->data =data;
        this-> next=nullptr;


    }

    ~Node(){

        int value =this->data;

        if(this->next != nullptr)
        {
            delete next ;
            this->next=nullptr;



        }

        cout<<"Memory is free for node with data"<<value<<endl;


    }


};

void insertAtHead(Node* &head , int da)

{

    Node* temp = new Node(da);
    temp ->data = da;
    temp ->next  = head ;
    head =temp ;

}

void inserAtTail(Node* &tail ,int da)
{

     Node* temp = new Node(da);

     tail->next=temp ;
     tail =temp;





}

void insertAtposition(Node* &tail,Node* &head ,int position ,int da)


{
    if(position==1)
    {

        insertAtHead(head ,da);
        return;
    }

    Node* temp =head;
    int count = 1 ;
    while((position-1) >count)
    {

        temp =temp ->next;
        count++;


    }
      Node* tem = new Node(da);

    tem->next = temp ->next;

    temp -> next =tem;
    //add to last position

    if(temp->next==nullptr)
    {

       inserAtTail(tail ,da);
       return;
    }
 
}



void deleteNode(Node* &head  ,Node* &tail,int position )
{

    int count =1 ;
    Node* teamp=head;

    if (position == 1)
    {
        Node*temm=head;

        head =head->next ;
        temm->next =nullptr;

        delete temm;
        return;





    }

    while(count!=position)
    {
        teamp=(teamp->next);

        
        count++;



    }

    if(teamp->next ==tail )
    {

        tail=teamp;


    }

    Node * tem =teamp->next;

    teamp->next =(teamp->next)->next ;
    tem->next =nullptr;

    delete tem;




}




void print(Node* head)
{
    Node* temp =head;
   

    while(temp!=nullptr)
    {

        cout<<temp->data<<" " ;

        temp=temp->next;

    }
    cout<<endl;
   
}

void search (int ele ,Node * head )

{

    if (head==nullptr)
    {
        cout<<"No element" <<endl; 
        return ;

    }
    Node* temp =head ;

    while( temp!= nullptr && !(temp->data ==ele)   )
    {
        temp=temp->next;
    }

    if(temp!= nullptr && (temp->data) ==ele)
    {
        cout<<ele <<" is found "<<endl;
        //cout<<temp->data<<endl;
    }
    else if (temp ==nullptr)
    {
        cout<<ele <<" Not  found "<<endl ;
    }


}









int main()
{

     Node* node1 = new Node(0);

    // cout<<node1 -> data <<endl;

    // cout<<node1-> next<<endl;

    Node* head =node1;
     Node*tail =node1;

    // insertAtHead(head ,9);

    // insertAtHead(head ,10);

    // insertAtHead(head ,11);
    //   insertAtHead(head ,12);

    inserAtTail(tail , 1);
    inserAtTail(tail , 2);
    inserAtTail(tail , 3);
    inserAtTail(tail , 4);
    inserAtTail(tail , 5);
    // insertAtposition(tail,head ,4,500 );
    // insertAtposition(tail,head ,1,1000 );
    //  deleteNode(head ,tail,1);

    //  cout<<"This is head= "<<head<<endl;
    //  cout<<"This is tail= "<<tail<<endl;
    print (head);
     deleteNode(head ,tail,5);
     search( 5,head );
     print (head);

    


     //print(head  );


    //   cout<<"This is head= "<<head<<endl;
    //  cout<<"This is tail= "<<tail<<endl;

    

    // print(head  );



  


    return 0 ;







}