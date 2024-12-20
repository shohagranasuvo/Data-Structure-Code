#include<bits/stdc++.h>
using namespace std;

struct Course{

    string CourseID ;
    string CourseTitle;
    int RoomNumber ;
    int StudentCount;


    Course()
    {

    }
    Course(string CourseID ,string CourseTitle ,int RoomNumber , int StudentCount )
    {
        this->CourseID=CourseID;
        this->CourseTitle =CourseTitle;
        this->RoomNumber = RoomNumber ;
        this->StudentCount = StudentCount ;



    }
    
    void setCourseID(string CourseID) {
        this->CourseID = CourseID;
    }

    void setCourseTitle(string CourseTitle) {
        this->CourseTitle = CourseTitle;
    }

    void setRoomNumber(int RoomNumber) {
        this->RoomNumber = RoomNumber;
    }

    void setStudentCount(int StudentCount) {
        this->StudentCount = StudentCount;
    }

    string getCourseID() {
        return CourseID;
    }

    string getCourseTitle() {
        return CourseTitle;
    }

    int getRoomNumber() {
        return RoomNumber;
    }

    int getStudentCount() {
        return StudentCount;
    }

    void display() {
        cout<<"Course ID: " << CourseID ;
        cout<<"  Course Title: " << CourseTitle;
        cout<<"  Room Number: " << RoomNumber ;
        cout<<"  Student Count: " << StudentCount<<endl<<endl ;
    }

    int  studentannex1()
    {
        if(this->getRoomNumber()==1)
        {
            return this->getStudentCount();
        }
        else{

            return 0 ;
        }
       

    }






};

int main()
{

    Course c[6];

     c[0]= Course("CS01346","Data Structure [M]  ",3,41);
     c[1] =Course("CS01348","Data Structure [O]",3,39);
     c[2]=Course("CS01343 ","Data Structure [J]",1,38);
     c[3]=Course("CS01347","Data Strcuture [N]",1,40);
     c[4]=Course("CS01334","Data Strcuture [A] ",1,39);
     c[5]=Course("CS01349 ","Data Strcuture [P]",1,37);

     int StudentAnnex1=0 ;

     for(int i = 0 ; i< 6 ; i++)
     {
        
       StudentAnnex1+= c[i].studentannex1();
       
     }

      for(int i = 0 ; i< 6 ; i++)
     {
        
       c[i].display();
       
     }

     cout<<"Total student in annex 1 = "<<StudentAnnex1 <<endl;
     int  Annex1count = 0 ;

     for(int i = 0 ; i< 6 ; i++)
     {
        if(c[i].getRoomNumber()==1){
       Annex1count++;}
     }

      cout<<"Total annex 1 room  = "<<Annex1count <<endl;












}