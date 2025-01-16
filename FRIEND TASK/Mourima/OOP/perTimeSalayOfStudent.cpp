#include <bits/stdc++.h>
using namespace std;
class student{
    private:
    int pertimeSalary ;
    double cgpa ;
    public:
    student(){}
    
    student(int pertimeSalary ,double cgpa)
    {
        this->pertimeSalary=pertimeSalary;
         this->cgpa=cgpa;

    }
    void  setpertimeSalary(int pertimeSalary)
    {
         this->pertimeSalary= pertimeSalary ;
            
    }
    
    
    void  setcgpa(double cgpa)
    {
             this->cgpa= cgpa ;


    }
    
   int getpertimeSalary()
     {
        return pertimeSalary ;
     }

     double getcgpa ()
     {
        return cgpa ;
     }

     void  display (); 
     bool isCgpa();
     bool scholarship();
     void salarychange();

    
    };
    void  student :: display ()
    {
        cout<<"Student pertimeSalary :" << pertimeSalary <<" CGPA is "<<cgpa <<endl ;
        
         
    }

    bool student :: isCgpa()
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

     void student :: salarychange()
     {
        if(cgpa<=4 && 3.75<=cgpa)
        {
            double newsal  = getpertimeSalary()+ (getpertimeSalary()* .2) ;
            setpertimeSalary(newsal);
        }
        else 
        {
              double newsal  = getpertimeSalary()- (getpertimeSalary()* .2) ;
            setpertimeSalary(newsal);

        }
     }
     




int main() {
    student  s[3] ;
    for(int i = 0 ; i<3 ; i++)
     {
        int x ;
        double  y ;
         cout<<"Give student "<<i+1<<" pertimeSalary ";
         cin>>x ;
                    
           
         
            
        s[i].setpertimeSalary(x);


        cout<<"Give student "<<i+1<<" cgpa ";
         cin>>y ;
        
        

        s[i].setcgpa(y) ;

     }
    int  count1= 0 ;
     for(int i = 0 ; i< 3 ;i++)
     {  
     while(s[i].isCgpa() !=true)
       {
        cout<<"InvalpertimeSalary CGPA for student number "<<i+1<<" .Give the cgpa again for student "<<i+1<<endl ;
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

        s[i].salarychange();

        cout<<"new salary = "<<s[i].getpertimeSalary()<<endl; 


      
       

       

     }
     cout<<"Total number of student who got scholarship is = "<<count1<<endl;


    
    return 0;
}