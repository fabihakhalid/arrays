#include <iostream>
using namespace std;

int findLargest(int arr[], int n) {
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }   
    return largest;
}

int main() {
    int arr[] = {10, 20, 30, 40, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Largest element: " << findLargest(arr, n) << endl;
    return 0;
}
