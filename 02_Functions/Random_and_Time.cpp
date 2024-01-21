#include<iostream>
#include<cstdlib> //for rand()
#include<ctime>
using namespace std;
int main()
{
    int random_num{};
    size_t count{10};
    int min{1};
    int max{6};

    cout<<"RAND_MAX on this system: "<<RAND_MAX<<endl;
    srand(time(nullptr)); //to get different sequence of random numbers for individiual runs (seed)

    for(size_t i{1}; i<=count; ++i){
        random_num=rand()%max+min; //number between min and max
        cout<<random_num<<endl;

    }
 return 0;
}