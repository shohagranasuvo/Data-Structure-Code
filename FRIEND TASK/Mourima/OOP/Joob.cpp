#include <bits/stdc++.h>
using namespace std;

class job{
    public:
    int id ;
    double salary ;
    job(){}
    
    job(int id ,double salary)
    {
        this->id=id;
         this->salary=salary;

    }
    void setId(int id)
    {
                if(100<=id)
        {
             this->id= id ;

        }
        else
        {
          cout<<"Give the ammount greater then 100"<<endl;
            int y ;

            cin>>y;
            setId(y);
    }
    }
    
    void setSalary(double salary)
    {
        if(20000 <= salary && salary <= 60000)
        {
             this->salary= salary ;

        }
        else
        {
            cout<<"Give the ammount between 20000 to 60000"<<endl;
            double x ;

            cin>>x ;
            setSalary(x);
        }
       

    }
     int getid()
     {
        return id ;
     }

     double getSalary ()
     {
        return salary ;
     }
     void display ()
     {
        cout<<"Id = "<<this->getid() <<"\nSalary = "<<this->getSalary() <<endl ;
     }








};

int main() {
     job teacher [5];
    //  teacher[0].setId (100);
    //  teacher[0].setSalary(50000);
    //  teacher[0].display();
    //  teacher[1].setId(101);
    //  teacher[1].setSalary(100000);
    //  teacher[1].display();
     
     for(int i = 0 ; i<5 ; i++)
     {
        int x ;
        double  y ;
         cout<<"Give teacher "<<i+1<<" Id ";
         cin>>x ;
                    
           
         
            
        teacher[i].setId(x);


        cout<<"Give teacher "<<i+1<<" Salary ";
         cin>>y ;
        
        

        teacher[i].setSalary(y) ;

     }

      for(int i = 0 ; i<5 ; i++)
     {

        cout<<"Teacher "<<i+1<<" Information : "<<endl;
        teacher[i].display();

     }

     


     




    
    
    return 0;
}