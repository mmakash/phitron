#include <iostream>

// Function to modify the array using a pointer
void setArrayToZero(int *arr, int size) {
    for (int i = 0; i < size; ++i) {
        *(arr + i) = 0; // Set each element to zero using pointer arithmetic
    }
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50}; // Initialize the array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    std::cout << "Array before modification: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Call the function to set array elements to zero
    setArrayToZero(arr, size);

    std::cout << "Array after modification: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
