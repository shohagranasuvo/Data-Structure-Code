#include<iostream>
#include<memory>
using namespace std;

int main(){

    unique_ptr<int> unPtr1 = make_unique<int>(25);

    cout << *unPtr1 << endl;     // This will print the value stored in the pointer
    cout <<&unPtr1<<endl;

    system("pause>0");
   
}