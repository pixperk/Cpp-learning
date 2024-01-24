#include<iostream>
using namespace std;
int main()
{
    int rows, stars;
    cout<<"How many Rows? ";
    cin>>rows;
    cout<<"\nHow many stars in each row?";
    cin>>stars;
    for(int i=1; i<=rows; i++){
        for(int j=1; j<=stars; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
 return 0;
}