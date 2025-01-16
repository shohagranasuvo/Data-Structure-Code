#include <iostream>
using namespace std;
class Stack {
    public:
    Stack *next=nullptr ;
    int data ;
     Stack() {}

    // //int top = 0 ;
     Stack (int data)
    {
        this->next = nullptr ;
        this->data = data ;

    }
    // Stack ()
    // {
    //     this->next=nullptr;
    // }

    bool isempty(Stack * head)
    {
       if(head==nullptr)
       {
        return true ;

        
       }
       else
       {
        return false ;
       }
    }

    void push (Stack * &head ,int data  )
    {
       

         Stack* newNode = new Stack(data); 
      newNode->next = head;            
      head = newNode; 

    }

    void pop(Stack * &head)
        {
        if(isempty(head)==true)
        {
            cout<<"Satack is full"<<endl ;
            return  ;
        }
         
           Stack* temp = head; 
           head = head->next;  
           delete temp; 
            

        
    }
    void display (Stack* head)
    {   Stack * curr= head ;
    cout<<"Here the Stack :";
        while(curr!=nullptr)
        {
            cout<<curr->data <<" ";
            curr=curr->next ;
        }
        cout<<endl;
    }
};









int main() {
    Stack * head =nullptr ;
    Stack s;
 
    s.push(head,30) ;
    s.push(head ,20);
    s.push(head ,40);
    s.push(head ,50);
    s.display(head);
    s.pop(head);
    s.pop(head);
    s.display(head);
    


    
    
    return 0;
}