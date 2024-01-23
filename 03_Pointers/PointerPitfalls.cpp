#include<iostream>
using namespace std;
int main()
{
    //uninitialised pointers
    int *ptr ;//points randomly somewhere
    *ptr=10; //crash
    cout<<*ptr;

    //Dangling Pointers(pointers pointing to invalid memory)
    //refer pdf notes for more
 return 0;
}