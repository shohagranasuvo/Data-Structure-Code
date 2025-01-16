#include <bits/stdc++.h>
using namespace std;
class student{
    private:
    int id ;
    double cgpa ;
    public:
    student(){}
    
    student(int id ,double cgpa)
    {
        this->id=id;
         this->cgpa=cgpa;

    }
    void setId(int id)
    {
         this->id= id ;
            
    }
    
    
    void setcgpa(double cgpa)
    {
             this->cgpa= cgpa ;


    }
    
   int getid()
     {
        return id ;
     }

     double getcgpa ()
     {
        return cgpa ;
     }

     void display (); 
     bool isvalidCgpa();
     bool scholarship();
     bool probation();

    
    };
    void student :: display ()
    {
        cout<<"Student ID :" <<id<<" CGPA is "<<cgpa <<endl ;
        
         
    }

    bool student :: isvalidCgpa()
    {
        if(cgpa>=0 && cgpa <=4)
        {
            
            return true ;

        } 
        else
        {
            return false ;

        }
    }
    bool student :: scholarship()  
     {
        if(cgpa>=3.75 && cgpa<=4.00)
       {
        return true;
       }else{
        return false;
       }
        

     }


int main() {
    student  s[3] ;
    for(int i = 0 ; i<3 ; i++)
     {
        int x ;
        double  y ;
         cout<<"Give student "<<i+1<<" Id ";
         cin>>x ;
                    
           
         
            
        s[i].setId(x);


        cout<<"Give student "<<i+1<<" cgpa ";
         cin>>y ;
        
        

        s[i].setcgpa(y) ;

     }
    int  count1= 0 ;
     for(int i = 0 ; i< 3 ;i++)
     {  
     while(s[i].isvalidCgpa() !=true)
       {
        cout<<"Invalid CGPA for student number "<<i+1<<" .Give the cgpa again for student "<<i+1<<endl ;
        double x ;
        cin>>x ;
        s[i].setcgpa(x );
        
 

       }
       cout<<"Student "<<i+1<<" details : " ;
        s[i].display();
        if(s[i].scholarship())
        {
            cout<<"Student "<< i+1<<" Will get scholarship "<<endl ;
            count1++ ;
        }
        else
        {
             cout<<"Student "<< i+1<<" Will  not get scholarship "<<endl ;
        }


      
       

       

     }
     cout<<"Total number of student who got scholarship is = "<<count1<<endl;
     
      


    
    
    return 0;
}