#include <iostream>
using namespace std;

class Node{
    public:

    Node* pre;
    Node* next;
    int data;

    Node(int da){
        pre=NULL;
        next=NULL;
        data=da;
 
}



};

void insertAthead(Node* & head , int da ){

    Node* temp =new Node(da);

    head->pre =temp;
    temp->next =head;

    head=temp;


}


void print (Node*&head,Node*& tail)
{


    Node*temp =head;

    while(temp !=NULL )
    {

        cout<<temp ->data  <<" is in the memory = "<< temp<<endl;

        temp= temp->next;


    }

}

void insertAttail(Node*&tail,int da)
{
    Node* newNode =new Node(da);

    tail->next = newNode;

    newNode->pre =tail;

    tail = newNode;

}

void insertAtAnyPosition(Node*head ,Node*tail ,int position ,int da)

{

    if(position==1)
    {

        insertAthead(head ,da);
        return;
    }

    Node* temp =head;
    int count = 1 ;
    while(count < position - 1 && temp->next != NULL)
    {

        temp =temp ->next;
        count++;


    }
    //   Node* tem = new Node(da);

    // tem->next = temp ->next;

    // temp -> next =tem;
    //add to last position

    if(temp->next==NULL)
    {

       insertAttail(tail ,da);
       return;
    }


    Node* newNode = new Node(da);

    newNode->next =temp->next ;

    newNode ->pre =temp;

    temp->next =newNode ;

   (temp->next)->pre = newNode ;



}



int main()
{

    Node* node1 =new Node(2);

    Node*head=node1;
    Node*tail=node1;
    insertAthead(head,1);
   // print(head );

    insertAttail(tail ,3);
     insertAttail(tail ,4);

     insertAttail(tail ,5);
     insertAttail(tail ,6);
     insertAtAnyPosition(head ,tail ,3 ,33);


    print(head,tail);







}