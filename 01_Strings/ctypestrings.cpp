#include <iostream>
#include <cctype>
#include <cstring> // Include the header for strcpy

using namespace std;

int main()
{
    char my_name[8];
    // my_name = "Frank"; // Error: Cannot assign directly to an array
    strcpy(my_name, "Frank"); // Fine
    cout <<"My name is "<< my_name << endl;  // Output: Frank

    char first_name[20];
    char last_name[20];
    char full_name[50];
    char temp[50];

    cout<<"Please enter your first name: "<<endl;
    cin>>first_name;

    cout<<"Please enter your last name: "<<endl;
    cin>>last_name;
    cout<<"------------------------------------"<<endl;

    cout<<"Hello "<< first_name << ", your first name has " <<strlen(first_name)<<" characters"<<endl;

    cout<<"Hello "<< first_name << ", your last name has " <<strlen(last_name)<<" characters"<<endl;

    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);
    cout<<"Your full name is "<<full_name<<endl;

    cout<<"--------------------------------------"<<endl;

   



    
    return 0;
}
