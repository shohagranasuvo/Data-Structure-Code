#include <iostream>
using namespace std ;

string encode(string  c ,int a)
{
    string r ;
    int count=0; 
    
     for(int i =0 ; i<c.size();i++)
    {

        
        if(count==a)
        {
            
            
           
            char x=c[i]+2;




            r+=x;
            count=0;


        }
        else
        {

        r+=c[i];
        count++;
        }
        

}
return r ;
}



int main(){
     string s ,res;
     cout<<"Enter Message ";
    getline(cin,s);
    int j ;
    cout<<"Enter skip index ";
    cin>>j;

    cout<<encode(s,2)<<endl;

   

        
        




    }







