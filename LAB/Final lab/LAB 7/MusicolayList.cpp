#include <bits/stdc++.h>
using namespace std;

class node
{
    public: 
    string songName ;

} ;
class music {

    public :
    string name ; 
    music * next ; 

    music ( string name)
    {
        this->name= name;
        this->next =NULL ;


    }

    music* addSong (music * head , string song )
    {

        if(head==NULL )
        {
            music* newMusic = new music(song);
            return newMusic ;

        }
        else
        {
            music* curr=head ;
            
            music* newMusic = new music(song);

            while(curr->next != NULL)
            {
                curr= curr->next  ;

            }
            curr->next = newMusic ;

            return newMusic ;

           

        } 

     
    }

    void  removeSong (music * head ,string title  )
    {
        if(head->name ==title)
        {
            head = head ->next ;

        }

       
        music * pre =head ;
         music*  curr=head->next ; 
        while(curr->name != title)
        {   pre= pre->next ;
            curr= curr->next ;
        }
        pre->next =curr->next ;
        curr->next =NULL ;
        cout<<"Song is delete Name = "<<title<<endl ;



    }

    void searchMusic (music * head , string title)
    {
        music* curr = head ;
        while ( curr!=NULL && curr->name!=title )
        {
            curr = curr->next ;

        } 
    

    if(curr !=NULL)
    {
        cout<<"The song found "<<endl ;
    }
    else
    {
        cout<<"The song does not found  "<<endl ;
    }}

    void display (music * head )
    {
        music  * curr = head ;

        while (curr!=NULL)
        {
            cout<<"Music name = "<<curr->name ;
            curr=curr->next ;
        }
        
        
        
        
            }





};

int main() {
    
    
    return 0;
}