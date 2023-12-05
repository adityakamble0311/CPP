#include <iostream>
using namespace std;
template <typename T>
void selectionSort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
       swap(arr[i], arr[minIndex]);
    }
}
template <typename T>
void displayArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int main() {
    const int size = 5;

    int intArray[size] = {5, 2, 8, 1, 3};
    cout << "Original Integer Array: ";
    displayArray(intArray, size);

    selectionSort(intArray, size);

    cout << "Sorted Integer Array: ";
    displayArray(intArray, size);

    float floatArray[size] = {5.5, 2.2, 8.8, 1.1, 3.3};

    selectionSort(floatArray, size);

    cout << "Sorted Float Array: ";
    displayArray(floatArray, size);

    return 0;
}

