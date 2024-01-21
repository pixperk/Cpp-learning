#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int main()
{
    /* cout<<"Enter your full name";
    cin>>full_name;
    cout<<"Your full name is "<<full_name<<endl;*/
    // terminates with the whitespace//
    char full_name[50];
    cout << "Enter your full name: ";
    cin.getline(full_name, 50);
    cout << "Your full name is " << full_name << endl; // doesn't terminates with the whitespace//

    char temp[50];
    strcpy(temp, full_name);
    if(strcmp(temp, full_name)==0)
    cout<<temp<<" and "<<full_name <<" are the same "<<endl;
    else
    cout<<temp<<" and "<<full_name <<" are different "<<endl;
    
    for (size_t i=0; i<strlen(full_name); ++i){
        if(isalpha(full_name[i]))
        full_name[i]=toupper(full_name[i]);

    }

   
     cout<<"---------------"<<endl<<"Your name in UPPERCASE: "<<full_name<<endl;
    cout<<"_________________________"<<endl;
    cout<<" Result of comparing "<<full_name<<" and "<<temp<<": "<<strcmp(temp, full_name)<<endl;
    cout<<" Result of comparing "<<temp<<" and "<<full_name<<": "<<strcmp(full_name, temp)<<endl;
    
    return 0;
}