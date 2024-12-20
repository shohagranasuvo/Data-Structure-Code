#include <bits/stdc++.h>
using namespace std ;
struct Student
{

    int id ;
    float CGPA;

   

    
};

 void display (Student * s1[]){

     for(int i = 0 ; i<5 ;i++)
    {

        cout<<"FOR STUDENT "<<i;
        cout<<" ID : "<<s1[i]->id;
        cout<<" CGPA : "<<s1[i]->CGPA;
        cout<<"\n";

    }}



    




int main()
{

    Student *s1[5];

    for(int i = 0 ; i<5 ;i++)
    { 
         s1[i] = new Student();

        cout<<"For Student "<<i+1<<" give id = "; 
        cin>>s1[i]->id;

        cout<<" give CGPA = "; 

        cin>>s1[i]->CGPA;



    }


    
       display(s1);
    

}