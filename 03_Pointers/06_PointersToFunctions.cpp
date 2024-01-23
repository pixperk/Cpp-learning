#include <iostream>
using namespace std;

void double_data(int *ptr)
{
    *ptr *= 2;
}
int main()
{
    int val{10};
    int *pointer{nullptr};

    double_data(&val);
    cout << val;
    cout << endl;
    pointer = &val;
    double_data(pointer);
    cout << val;
    return 0;
}