#include<iostream>
#include<string>//For cpp strings
using namespace std;
int main()
{
   string s1; //Empty
   s1=" is short for ";
   string s2{"Yashaswi"};
   string s3 {s2};
   string s4 {"Yashaswi", 4} ;//Yash
   string s5{s2, 0, 4};//Yash
   string s6(17, '-');
   cout<<"String1 is "<<s1<<endl;
   cout<<"String2 is "<<s2<<endl;
   cout<<"String3 is "<<s3<<endl;
   cout<<"String4 is "<<s4<<endl;
   cout<<"String5 is "<<s5<<endl;
   cout<<"String6 is "<<s6<<endl;
   cout<<s4<<s1<<s2<<endl;
   cout<<s2+" is often called "+s5<<endl;//concatenation
   /* cout<<"C style literals" + "can't be concatenated independently"; */
   cout<<s4[2]<<endl;
   cout<<s4.at(2)<<endl;
   cout<<"both are the same"<<endl;
   cout<<s6<<endl;

   for (auto c: s2)
   cout<<c<<endl;

   string fruit1 {"Apple"};
   string fruit_one {"apple"};
   string fruit_2{"Banana"};

   cout<<boolalpha;
   cout<<s6<<endl;
   cout<<(fruit1 == fruit_one)<<endl;
   cout<<(fruit1 == "Apple")<<endl;
   cout<<(fruit1 >= fruit_2)<<endl; //A<B; A<a
   cout<<(fruit1 != fruit_2)<<endl;

   string name;

   cout<<"Enter a name: "<<endl; //Yashaswi Mishra
   /* cin>>name; //Only Yashaswi accepted */
   getline(cin,name); //Reads entire name with whitespaces
   cout<<name<<endl;

   cout<<"Enter your name terminated by *"<<endl;
   getline(cin, name, '*');
   cout<<name<<endl;


 return 0;
}