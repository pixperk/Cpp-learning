#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s0;
    string s1{"Apple"};
    string s2{"Banana"};
    string s3{"Kiwi"};
    string s4{"apple"};
    string s5{s1};
    string s6{s1, 0, 3};
    string s7(10, 'X');
s1[1]='n';
s1.at(2)='k';
cout<<"s1 is now "<<s1<<endl;

s1="Watermelon";
cout<<"s1 is now "<<s1<<endl;

/* cout<<"C type"+"C type"+s1//not possible */

cout<<s1.substr(0,5)<<endl; //from index 0 we want 5 characters
s1.erase(5,9);
cout<<s1;
    
 return 0;
}