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
        this-> next=NULL;


    }

    Node (int data)

    {

        this ->data =data;
        this-> next=NULL;


    }

    ~Node(){

        int value =this->data;

        if(this->next != NULL)
        {
            delete next ;
            this->next=NULL;



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

    if(temp->next==NULL)
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
        temm->next =NULL;

        delete temm;
        return;





    }

    while(count!=position-1)
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
    tem->next =NULL;

    delete tem;




}




void print(Node* &head)
{
    Node* temp =head;
   

    while(temp!=NULL)
    {

        cout<<temp->data<<"    Address at "<<temp<<endl;

        temp=temp->next;

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
     deleteNode(head ,tail,1);

     cout<<"This is head= "<<head<<endl;
     cout<<"This is tail= "<<tail<<endl;
     deleteNode(head ,tail,5);

    


     print(head  );


      cout<<"This is head= "<<head<<endl;
     cout<<"This is tail= "<<tail<<endl;

    

    // print(head  );



  


    return 0 ;







}