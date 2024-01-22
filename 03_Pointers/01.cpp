#include<iostream>
using namespace std;
int main()
{
//declaring pointers
int *int_ptr;
double* double_ptr;

cout<<"Value of int_ptr is: "<<int_ptr<<endl;//garbaage
cout<<"Address of int_ptr is: "<<&int_ptr<<endl;
cout<<"Size of int_ptr is: "<<sizeof(int_ptr)<<endl;//4(sisze of pointer variable not datatype)
int_ptr= nullptr; //int_ptr points nowhere
cout<<"Value of int_ptr is: "<<int_ptr<<endl;

int score{10};
double high_temp {100.7};
int *score_ptr {nullptr};
score_ptr = &score; //OK, stores address of score
/* score_ptr = &high_temp; */ //compiler error

cout<<score_ptr<<endl;//Address of score
cout<<*score_ptr<<endl;//Access data at address using dereference op. *
cout<<score<<endl;


 return 0;
}