#include <bits/stdc++.h>
using namespace std ;
struct Student 
{
    int Student_id ;
    string name ;
    double cgpa ;
    string dob ;


    Student ()
    {
         Student_id = 101 ;
        name ="Suvo" ;
         cgpa=3.12 ;
         dob ="22-11-2002" ;
    }

     Student (int Student_id , string name , double cgpa ,string dob)
    {
         this->Student_id=Student_id ;
        this-> name=name ;
        this-> cgpa = cgpa ;
        this-> dob = dob ;
    }

    void setID (int Student_id)
    {
        this->Student_id = Student_id;
    }

    void setName(string name)
    {
        this->name=name ;

    }
    void setCgpa (double cgpa)
    {

        this-> cgpa =cgpa ; 
    }

    int  getID()
    {
        return  this->Student_id;
    }

    string getName ()
    {
        return this-> name ;

    }

    double  getCgpa()
    {

        return this->cgpa ;
    }

    string getDob()
    {return this ->dob;}

    void display()
    {

        cout<<"ID = "<<this->Student_id <<"\nName = "<<this->name <<"\ncgpa = "<<this-> cgpa <<"\n dob = "<<this->dob <<"\n";
    }

    void findProbation()
    {

        if(this->cgpa <2.5)
        {

            cout<<"ID "<<this->Student_id<<"  and Name = "<<this->name <<" student in probation ";
        }
    }

   






};

 void searchStudent ( Student st[] , int x  )
    {

        cout<<"Enter student id";
        int item ;
        cin>>item ;

        for(int i =0 ; i<x ; i++)
    {
        if((st[i].Student_id)==item)
        {

            cout<<"Found ;"

        }



    }
    


 
    }
int main(){

    cout<<"How many student's data you want store ";
    int x ;
   cin>>x ;

    Student st[x];

    for(int i = 0 ;i<x ;i++)
    {

        cout<<"Enter "<<i+1<<" number student data";

        cout<<"Enter id ";
        
        cin>>st[i].Student_id ;

        cout<<"Enter name ";
         cin>>st[i].name ;

         cout<<"Enter cgpa ";
         cin>>st[i].cgpa ;

         cout<<"Enter dob ";
         cin>>st[i].dob ;



    }
    for(int i = 0 ; i <x ;i++)
    {

        cout<<i+1<<" number student data \n";
        st[i].display();
    }

    searchStudent(st,x);




    









}
