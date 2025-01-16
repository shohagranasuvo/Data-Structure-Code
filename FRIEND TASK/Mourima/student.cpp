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
        cout<<"Student ID :" <<id <<"\nCGPA : "<<cgpa<<endl;
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
     for(int i = 0 ; i< 3 ;i++)
     {
        s[i].display();
       bool checkcgpa =  s[i].isvalidCgpa();
       while(checkcgpa !=true)
       {
        cout<<"Invalid CGPA .Give the cgpa again "<<endl ;
        double x ;
        cin>>x ;
        s[i].setcgpa(x );
        
          checkcgpa =  s[i].isvalidCgpa();


       }
       
     }


    
    
    return 0;
}