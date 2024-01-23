#include<iostream>
using namespace std;

int square (int &n){
    return n*n;
}
int main()
{
    //Lvalues have names and are addressable, are modifiable if not constant
   /*  x is an l value */ int x{100}; //100 is an r value
    /*  y is an l value */int y = x+200;//x+200 is an r value
    x=x+y; //R value x+y to L value x

    //l value references(used till now)
    int &ref1 = x;//ref1 is reference to an l value
    ref1=1000;
    /* int &ref2 = 100; */ //Error: 100 is an r value
    square(x); //Ok
    /* square(5); *///Error : can't reference an r value
 return 0;
}