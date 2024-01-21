#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    cout<<"The sqrt of 17098 is: "<<sqrt(17098)<<endl;
    cout<<"Cube of 4 is "<<pow(4.0, 3.0)<<endl;

    double num{};
    cout<<"Enter a number"<<endl;
    cin>>num;

    cout<<"The cube root of "<<num<<" is "<<cbrt(num)<<endl;
    cout<<"sin("<<num<<") is "<<sin(num)<<endl;
    cout<<"next nearest int of "<<num<<" is "<<ceil(num)<<endl;
    cout<<"previous nearest int of "<<num<<" is "<<floor(num)<<endl;
    cout<<"round of "<<num<<" is "<<round(num)<<endl;
    cout<<"______________________________________"<<endl;


 return 0;
}