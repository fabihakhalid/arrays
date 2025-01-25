#include <iostream>
using namespace std;

int findsmallest(int arr[], int n) {
    int smallest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}

int main() {
    int arr[] = {10, 20, 30, 40, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "smallestelement: " << findsmallest(arr, n) << endl;
    return 0;
}
