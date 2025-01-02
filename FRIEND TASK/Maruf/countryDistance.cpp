#include <bits/stdc++.h>
using namespace std ;


class country{
    public:
    string countryCode ;
    double lagtitude ;
    double longitude ;
    string name ;

    country(){}
    country(string countryCode  ,double lagtitude,double longitude , string name)
    {
        this-> countryCode =countryCode;
        this-> lagtitude =lagtitude ;
        this->longitude = longitude ;
        this-> name =name ;



    }








};


double distance(country country1  , country country2){

    double th1 ,th2 ,lam1 ,lam2 ;

    th1=(country1.lagtitude)*(M_PI /180);
    th2=(country2.lagtitude)*(M_PI /180);
    lam1 =(country1.longitude)*(M_PI /180);
    lam2 =(country2.longitude)*(M_PI /180);

     double a = (pow(sin((th2-th1)/2),2))+(cos(th1)*cos(th2)*pow(sin((lam2 -lam1)/2),2));

     double d =2*6400*asin(sqrt(a));

     return d ;









}



int main()
{

    country bangladesh = country("05082024",23.8103,90.4125,"BANGLADESH");

    country greenland = country("08052024",64.1830, 51.7214,"GREENLAND");

    double dis = distance(bangladesh , greenland);


    cout<<"Total distance of the bagladesh captital to greenland catital is "<<dis<<"KM"<<endl;










}