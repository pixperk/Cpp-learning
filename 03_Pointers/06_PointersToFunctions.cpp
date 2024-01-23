#include <iostream>
#include<vector>
#include<string>
using namespace std;

void double_data(int *ptr)

{
    *ptr *= 2;

    
}
   //swap function
  void swap(int *a, int*b)
  {
    int temp = *a;
    *a = *b;
    *b = temp;
  

  }

  void display(const vector <string> *const v){
    /* (*v).at(2)="Unexpected"; *///don't want to happen so make the vector constant
    for (auto element: *v)
    cout<<element<<" ";
    cout<<endl;
   /*  v = nullptr; */ //don't want to happewn so make the pointer const
    

  }

  void display(int *array, int sentinel) {
    while (*array != sentinel)
        cout << *array++ << " ";
    cout << endl;

}
int main()
{
    int val{10};
    int *pointer{nullptr};

    double_data(&val);
    cout << val<<endl;
    cout << "\n-----------------------------" << endl;
    pointer = &val;
    double_data(pointer);
    cout << val<<endl;
    cout << "\n-----------------------------" << endl;
    int a=60; 
    int b =70;
    cout<<"a is "<<a<<" b is "<<b<<endl;
    swap(&a, &b);
     cout<<"a is "<<a<<" b is "<<b<<endl;
    cout << "\n-----------------------------" << endl;
     vector <string> games{"Chess", "Pool", "Cards"};
     display(&games);

      cout << "\n-----------------------------" << endl;
    int scores[] {100,98,97,79,85,-1};
    display(scores, -1);
    
    cout  << endl;


 
    return 0;
}