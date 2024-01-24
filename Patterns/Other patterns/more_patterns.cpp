#include<iostream>
using namespace std;

void num_triangle(int n){
    for (int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            cout<<"  ";
        }
        for (int j=i; j>=1; j--){
            cout<<j<<" ";
        }
        for (int j=2; j<=i; j++){
            cout<<j<<" ";
        }
    cout<<endl;
    }
}
void number_diamond(int n){
for(int i=1; i<n; i++){
    for(int j=i; j<=n; j++){
        cout<<" ";
    }
    for(int j=1; j<=2*i-1;j++){
        cout<<j;
    }
    cout<<endl;
}
for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
        cout<<" ";
    }
    for(int j=1; j<=2*(n-i+1)-1; j++){
        cout<<j;
    }
    cout<<endl;
}
}
int main()
{
    num_triangle(5);
    number_diamond(5);
 return 0;
}