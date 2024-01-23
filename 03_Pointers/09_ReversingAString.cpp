#include <iostream>
#include <string>

// Avoid including std to use explicit namespace
using namespace std;

string reverse_string(const string &str) {
    string reversed = str;  // Initialize reversed with the original string
    int size = str.size();


    for (int i = 0; i < size / 2; i++) {
        char temp = reversed[i];
        reversed[i] = reversed[size - i - 1];
        reversed[size - i - 1] = temp;
    }


    return reversed;
}

int main() {
    string original = "Hello, World!";
    string reversed = reverse_string(original);

    cout << "Original: " << original << endl;
    cout << "Reversed: " << reversed << endl;

    return 0;
}
