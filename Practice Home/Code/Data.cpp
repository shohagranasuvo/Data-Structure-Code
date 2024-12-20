#include <iostream>
using namespace std;

class Node {
    public :

    int data ;
    Node* next ;

    Node(int da){
        data =da;
        next=NULL;
    }

    ~Node (){
        int value = this-> data;

        if(next!=NULL){

            delete  next ;
            next =NULL;

        }
        cout<<"Memory free for "<<data<<"\n";

    }

};

void insertNode(Node*& tail ,int element,int da)
{
    if(tail==NULL)
    {
        Node* temp =new Node(da);

        tail = temp ;
        temp->next =temp ;

        return ;



    }
    else {
        Node* current  =tail;

        while(current -> data != element )
        {
            current=current->next ;
        }

        Node* temp = new Node(da);

        temp->next = current->next;
        current->next =temp ;



    }
   


}
 void print(Node* &tail)
    {
        if(tail==NULL)
        {
            cout<<"NO ELEMENT"<<endl;
            return;
        }

      Node* tem =  tail->next;
      do{
        cout<<tem->data<<" ";

        tem=tem->next ;
      } while(tem != tail ->next);
      cout<<"\n";

    }

    void deleteEle(Node*&tail , int element)
    {

        //empty

        if(tail==NULL)
        {

            cout<<"List is empty"<<endl;
            return;
        }

        else{
            Node* pre=tail;
            Node* cur =tail->next ;

            while(element != cur->data)
            {

                 pre=cur ;
                cur=cur->next;
               

            }

             if(cur==pre)
            {
                tail=NULL;
            }

            if(tail==cur)
            { //if tail delete that coz segmentation fault
                tail=pre ;
            }
           
            pre->next =cur->next;
            cur->next=NULL;
            delete cur;
        }

    }

int main(){

    
    Node*tail =NULL;

    insertNode(tail,1,1);

    insertNode(tail,1,2);
     insertNode(tail,2,3);

      insertNode(tail,3,4);
      insertNode(tail,4,5);
     print(tail);
    deleteEle(tail,2);
    print(tail);

    deleteEle(tail,5);
    print(tail);
    deleteEle(tail,1);
     print(tail);
     deleteEle(tail,3);
     deleteEle(tail,4);
     print (tail);






}