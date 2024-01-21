#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="Apple Banana Kiwi Watermelon Guava Papaya";
    string fruit{};

    cout<<"Which fruit do you want? --->";
    cin>>fruit;

    size_t position = s1.find(fruit);
   if (position != string::npos)
    cout << endl << fruit << " is available at position " << position<< endl;
else
    cout << fruit << " is not available!" << endl;

 return 0;
}