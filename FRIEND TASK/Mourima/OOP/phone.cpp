#include <iostream>
#include <string>

using namespace std;

class Phone {
public:
    string model;
    float price;
    string ownerName;


    Phone() {}


    Phone(string m, float p, string owner) {
        model = m;
        price = p;
        ownerName = owner;
    }


    void setModel(string m) {
        model = m;
    }


    void setPrice(float p) {
        price = p;
    }


    void setOwnerName(string owner) {
        ownerName = owner;
    }


    string getModel() {
        return model;
    }


    float getPrice() {
        return price;
    }


    string getOwnerName() {
        return ownerName;
    }


    void display() {
        cout << "The model of the phone: " << model << endl;
        cout << "The current price of the phone: " << price << endl;
        cout << "The owner name of the phone: " << ownerName << endl;
    }


    void boostPrice() {
        if (ownerName.length() > 6) {
            float result = getPrice() + (getPrice() * 0.2);
            setPrice(result);
        }
    }
};

int main() {

    // Phone myPhone("iPhone 13", 140000, "steve job");


    //     myPhone.display();
    // myPhone.boostPrice();
    // cout << "after boosting price"<<myPhone.getPrice()<<endl;

    //for average value of phone and find How many phone value is under average value

    Phone p[5] ;

     for(int i = 0 ; i<5 ; i++)
     {
        string x ,z ;
        float  y ;
         cout<<"Give phone model  " ;

         cin>>x ;
         p[i].setModel(x);
         cout<<"Give phone price  " ;
         cin>>y ; 
         p[i].setPrice(y);
        cout<<"Give OweneerName  ";
         cin>>z ;
         p[i].setOwnerName(z);

     } 
     double totalprice ;

     for(int  i = 0 ; i<5 ; i++)
     {
        totalprice += p[i].getPrice();

     }
     double avg = totalprice/5 ; 
     
     int countUnderAvgPrice = 0 ;

     for(int  i = 0 ; i<5 ; i++)
     {
        if (avg > p[i].getPrice())
        {
            countUnderAvgPrice++ ; 

        }
     }

     cout<<"The average price is "<<avg<<endl; 

     cout<<"Total  number of phone that has price lower than average price is "<<countUnderAvgPrice<<endl ;


     // if you want to see the phone details those have  less price .

     cout<<"These phone has less price than average price : "<<endl ;
     for(int  i = 0 ; i <5 ; i++)
     {

        if(avg> p[i].getPrice())
        {   
            p[i].display() ;
        }
     }




    return 0;
}