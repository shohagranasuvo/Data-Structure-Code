#include <bits/stdc++.h>
using namespace std ;
struct Student
{

    int id ;
    float CGPA;

    void display (){

     for(int i = 0 ; i<5 ;i++)
    {

        cout<<"FOR STUDENT "<<i;
        cout<<" ID : "<<this->id;
        cout<<" CGPA : "<<this->CGPA;

        cout<<"\n";



    }

    
}};



    




int main()
{

    Student s1[5];

    for(int i = 0 ; i<5 ;i++)
    {
        cin>>s1[i].id;
        cin>>s1[i].CGPA;



    }


    for(int i = 0 ; i<5 ;i++)
    {
       s1[i].display();
    }

}