#include<iostream>
using namespace std;
int main()
{
    int rows, stars;
    cout<<"How many Rows? ";
    cin>>rows;
    for(int i=1; i<=rows; i++){
        for(int j=i; j<=rows; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
 return 0;
}