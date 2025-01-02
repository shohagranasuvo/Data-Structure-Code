#include <bits/stdc++.h>
using namespace std ;

void Input(double * arr , double size)
{
  for(int i = 0 ; i<size ;i++)
  {

    cin>>*(arr+i);
  }


}

double mag(double * arrA ,double size )

{

   double  result=0 ;
    for(int i = 0 ; i<size  ; i++)
    {


        result+=*(arrA+i) * *(arrA+i);

    }

    result=sqrt(result);

    return result  ;



}

double calDotProduct(double * arrA ,double * arrB ,double size)
{
    double dot=0 ;

    for(int i = 0 ; i<size ; i++)
    {

        dot+=*(arrA+i)* *(arrB+i);

    }

    return dot ;


}

double thetaCal(double dot ,double magA ,double magB){

    double th ;

    th = (acos(dot/(magA*magB)))*(180.0 / M_PI);

    return th ;




}





int main()
{

    cout<<"Enter vector size ";
    double x;

    cin>>x;

      double* arrA = new double[3];

      cout<<"Enter Vector A ";

      Input(arrA ,x);

      double* arrB = new double[3];
       cout<<"Enter Vector B ";

      Input(arrB,x);

       cout<<"Enter Vector B ";

      double ArrAMag ,ArrBMag ;

      ArrAMag= mag(arrA,x);

      cout<<"Magnitude of Vector A "<<ArrAMag <<endl;

      ArrBMag = mag(arrB ,x);

        cout<<"Magnitude of Vector B "<<ArrBMag <<endl;

      double dotProduct ;

      dotProduct= calDotProduct(arrA ,arrB,x);

       cout<<"Dot Product  of Vector A and Vector B "<<dotProduct <<endl;


       double Theta ;

       Theta = thetaCal(dotProduct ,ArrAMag ,ArrBMag);

       cout<<"Angle between A and B vector is  = "<<Theta<<" degree "<<endl;




}