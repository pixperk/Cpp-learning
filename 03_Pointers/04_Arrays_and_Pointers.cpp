#include<iostream>
using namespace std;
int main()
{
    int scores[] {100, 95, 89}; //scores is the address of first array element

    cout<<scores<<endl; //address of first element of scores
    cout<<*scores<<endl;//points to first element

    int *score_ptr{scores}; //no need to add & as scores is the address of first element of scores array
    cout<<*score_ptr<<endl;//100
    cout<<score_ptr[2]<<" and "<<scores[2]<< " are equal "<<endl;
    cout<<*(score_ptr+2)<<endl;//89
    //scores[n], score_ptr[n] and *(score_ptr+n) can be used interchangeably



 return 0;
}