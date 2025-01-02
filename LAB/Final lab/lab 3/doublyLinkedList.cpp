#include <bits/stdc++.h>
using namespace std;
// class stack ()
// {
//     public  :
//     stack Head = ;

// }



class node{
    public :
    int data ;
    node* prev ;
    node* next ;

    node(int data )
    {
        this->data = data ;
        this->next=nullptr;
        this->prev = nullptr ;
    }

    void addnode(int data ,node* &head , node* &tail)
    {
        node* temp = new node(data);

        temp->prev =tail;
        tail =temp ;


        

    }
    


  

};


int main() {
    node* node1 = new node (1);
    node* head = node1 ;
    node* tail = node1 ;




    
    
    return 0;
}