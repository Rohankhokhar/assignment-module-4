#include <iostream>
using namespace std;

template <typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <typename T>
void parray(const T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArr[] = {64, 25, 12, 22, 11};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);

    cout << "Original integer array: ";
    parray(intArr, intSize);

    bubbleSort(intArr, intSize);

    cout << "Sorted integer array: ";
    parray(intArr, intSize);

    double doubleArr[] = {64.5, 25.1, 12.3, 22.4, 11.7};
    int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);

    cout << "Original double array: ";
    parray(doubleArr, doubleSize);

    bubbleSort(doubleArr, doubleSize);

    cout << "Sorted double array: ";
    parray(doubleArr, doubleSize);

}


