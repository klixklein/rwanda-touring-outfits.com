#include <iostream>
using namespace std;

// user defined function to print array
void printArr (int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

  // declare array
  const int size = 5;
  int arr[size] = {5, 2, 3, 4, 1};

  // temp variable to aid in swapping
  int temp;

  cout << "Original array: ";
  printArr(arr, size);

  // swapping first and last element
  temp = arr[0];
  arr[0] = arr[size - 1];
  arr[size - 1] = temp;

  cout << "Array with first and last element swapped: ";
  printArr(arr, size);

  return 0;
}