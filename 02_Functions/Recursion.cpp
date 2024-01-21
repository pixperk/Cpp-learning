#include<iostream>
using namespace std;

unsigned long long factorial(unsigned long long n);
unsigned long long fibonacci(unsigned long long n);
int main()
{
   cout<<factorial(8)<<endl ;
   cout<<fibonacci(30);
    
 return 0;
}

unsigned long long factorial(unsigned long long n){
    if(n==0){
        return 1; 
        } //base case
        return n*factorial(n-1);  // recursive case
   
}
unsigned long long fibonacci(unsigned long long n){
    if(n<=1)
    return n;
    return fibonacci(n-2)+fibonacci(n-1);
}