#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int score{100};
    int *scr_ptr{&score};

    cout<<*scr_ptr<<endl;//100
    *scr_ptr=200;
    cout<<*scr_ptr<<endl;//200
    cout<<score<<endl;//200

    cout<<"\n......................................."<<endl;
    double high_temp{100.7};
    double low_temp{37.4};
    double *temp_ptr{&high_temp};
    cout<<"\n"<<*temp_ptr<<endl;//100.7
    temp_ptr=&low_temp;
    cout<<*temp_ptr<<endl;//37.4

    cout<<"\n......................................."<<endl;
    string name{"Yashaswi"};
    string *string_ptr{&name};
    cout<<*string_ptr<<endl;//Yashaswi
    *string_ptr="James";//changes name as it points to name
    cout<<name<<endl;//James
    cout<<*string_ptr<<endl;//James
    name="Kshitij";
    cout<<name<<endl;//Kshitij
    cout<<*string_ptr<<endl;//Kshitij

    cout<<"\n......................................."<<endl;
    vector<string> music{"Rock", "Blues", "Jersey"};
    vector<string>*vec_ptr{&music};

    cout<<(*vec_ptr).at(0)<<" is a quite popular music genre"<<endl;

    cout<<"Some popular music genres:"<<endl;
    for(auto genre: *vec_ptr)
    cout<<genre<<endl;
    

 return 0;
}