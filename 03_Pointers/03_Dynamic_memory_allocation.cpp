#include<iostream>
using namespace std;
int main()
{
    /* int *int_ptr{nullptr};
    int_ptr = new int; //allocates an integer on the heap
    cout<<int_ptr<<endl; //address of newly created int
    cout<<*int_ptr<<endl; //garbage
    *int_ptr = 100; //100 to newly allocated int
    cout<<*int_ptr<<endl;//100
    delete int_ptr;//frees allocated storage
    cout<<*int_ptr<<endl;//garbage */

    cout<<"\n......................................."<<endl;
    double *array_ptr{nullptr};
    size_t size{};
    cout<<"How big an array you want? ";
    cin>>size;
    array_ptr = new double[size];//allocates new array on the heap
  /*  while (true)
   {
    array_ptr = new double[size];//memory runs out
   } */
    cout<<array_ptr;
    delete [] array_ptr;
    



 return 0;
}