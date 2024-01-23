#include<iostream>
using namespace std;

int find_max_element(int* arr, int size) {
    int maxElement = arr[0];  // Initialize maxElement with the first element

    for (int i = 1; i < size; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];  // Update maxElement if a larger element is found
        }
    }

    return maxElement;
}

void reverse_array(int* arr, int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i]; //try to write and visualise
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

    int main() {
    int arr[]{0, 1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    //Max item
    
    cout<<"Maximum element is "<<find_max_element(arr, size)<<endl;

    // Display the original array
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Reverse the array
    reverse_array(arr, size);

    // Display the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
 return 0;
}