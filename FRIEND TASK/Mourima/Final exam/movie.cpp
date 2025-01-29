#include <bits/stdc++.h>
using namespace std;

class movie {
  private:
  string movieTitle ;
  string movieID;
  float rating ;
  public:
  movie  ( string  movieTitle , string movieID , float rating )
  {
     this -> movieTitle =movieTitle ;
     this -> movieID = movieID;
     this -> rating = rating ;


  }
  movie (){};

  void setInformation (string movieTitle , string movieID , float rating )
  {


    this -> movieTitle =movieTitle;

     this -> movieID = movieID;
     this -> rating = rating ;

  }


  void displayInformation ()
  {
    cout<<"MOVIE NAME = "<< movieTitle<<endl;

    cout<<"MOVIE ID = "<<movieID<<endl;

    cout<<"MOVIE RATING = "<<rating <<endl<<endl;


  }

  void setmovieTitle(string t)
  {

  movieTitle= t;

  }

  void setmovieID(string I)
  {

  movieID= I;

  }

void setmovierating (float R)
  {

  rating = R;

  }

  void movieratingCategory(float rate )
  { if(rate>=9)
  {
  cout<<movieTitle<<" category is outstanding "<<endl<<endl;

  }

  else if ( rate<9 && 8<= rate )
  {

  cout<<movieTitle<<" category is Great "<<endl<<endl;

  }

  else if ( rate<8 && 7<= rate )
  {

  cout<<movieTitle<<" category is Good "<<endl<<endl;

  }

  else if ( rate<7 && 6 <= rate )
  {

  cout<<movieTitle<<" category is Average "<<endl<<endl;

  }
  else
  {
cout<<movieTitle<<" category is below Average "<<endl<<endl;

  }



  }



};

int main ()
{

    movie m1 ("Bahubali" ,"tamiltelugu" , 5.00) , m2 ("KGF" , "tamiltelugu" , 9.00) , m3 ("Pushpa" , "Tamiltelugu" ,6) , m4 ,m5;
    m1.displayInformation();
    m2.displayInformation();
    m3.displayInformation();

    m4.setInformation ("Krish_3", "Bollywood" , 7.5 ) ;

    m5.setmovieTitle("Dark");

    m5.setmovieID("Web_series");

    m5.setmovierating(10);

    m4.displayInformation();
    m5.displayInformation();


    m1.movieratingCategory(5.00);
    m2.movieratingCategory(9.00);
    m3.movieratingCategory(6);
    m4.movieratingCategory(7.5);
    m5.movieratingCategory(10);




return 0 ;


}