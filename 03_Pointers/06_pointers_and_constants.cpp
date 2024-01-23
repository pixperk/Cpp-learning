#include<iostream>
using namespace std;
int main()
{
    //Pointers to Constants

    int a=77;
    int b=98;
    const int *ptr{&a};
   /*  *ptr= 88; */ //compiler error
    ptr=&b; //ok
    //Data pointed by the pointer cannot be changed but pointer itself can change
    cout<<*ptr<<" "<<b;

    //Constant Pointers
    int c=99;
    int d=87;
    int *const ptr2 {&c};
    *ptr2 = 100; //0k
   /*  ptr2= &d; */ //error
    //Data pointed by the pointer can be changed but pointer itself cannot change

    //Constant Pointers to constants
    int e=99;
    int f=100;
    const int *const ptr3 = &e;
    /* *ptr3 = 87;
    ptr3 = &d; */ //ERROR
    //Both Data pointed by the pointer and pointer itself cannot change

 return 0;
}