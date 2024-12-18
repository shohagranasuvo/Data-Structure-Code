#include <iostream>
using namespace std;
 
void increase(void *data, int psize)
{
    if (psize == sizeof(char))
    {
        char *pchar;
        pchar = (char *)data;
        ++(*pchar);
    }
    else if (psize == sizeof(int))
    {
        int *pint;
        pint = (int *)data;
        ++(*pint);
    }
}
 
int main()
{
    char *m;
    char x = 'k';
    m = &x;



    // int *b;
    // int c =  1602;
    // b=&c ;




    increase(m, sizeof(x));
   // increase(b, sizeof(b));
 
   
    cout <<"Output of A : "<< m <<"\n  \n"<<endl;
   // cout <<"Output of B : "<< b <<"\n"<<endl;
 
    return 0;
}