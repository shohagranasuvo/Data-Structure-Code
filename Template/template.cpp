#include <bits/stdc++.h>
using namespace std ;
template <typename T ,typename V > 
 
class Pair {
    T x ;
    V y ;

    public:

    void setX(T x)
    {
        this->x = x ;
    }

    void setY(V y)
    {
        this->y = y ;
    }

    T getX()
    {
        return x ;
    }

    V getY()
    {
        return y ;
    }






};

int main ()
{

    Pair<int,char> p1 ;
    p1.setX(4);
    p1.setY('r');
    cout<<p1.getX()<<" "<<p1.getY()<<endl;

    Pair<Pair<int ,double> ,Pair<char ,string> > s ;
    Pair<int ,double> pid ;
    Pair<char,string> pcs;

    pid.setX(100);
    pid.setY(1001.1001);
    pcs.setX('I');
    pcs.setY(" AM SHOHAG ") ;

    s.setX(pid);
    s.setY(pcs);

    cout<<s.getX().getX()<<" \n"<<s.getX().getY()<<"\n"<<s.getY().getX()<<" "<<s.getY().getY()<<"\n";







}