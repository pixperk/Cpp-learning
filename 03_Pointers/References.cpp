#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    vector <string> stooges {"Larry", "Moe","Curly"};
    for(auto str:stooges){
        str = "Funny";      //changes the copy

    }

    for(auto str:stooges){
       cout<<str<<endl;   //Larry Moe Curly

    }
    for(auto &str:stooges){
        str = "Funny";      //changes the actual

    }

    for(auto str:stooges){
       cout<<str<<endl;   //Funny Funny Funny

    }
     for(auto const &str:stooges){
       /*  str = "Funny";   */    //compiler error

    }
 return 0;
}