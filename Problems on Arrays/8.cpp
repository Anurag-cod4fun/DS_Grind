/*
Problem 8
Rotate array by K elements : Block Swap Algorithm

Example 1:
Input: N = 5, array[] = {1,2,3,4,5} K=2
Output: {3,4,5,1,2}
Explanation: Rotate the array to right by 2 elements.

Example 2:
Input: N = 7, array[] = {1,2,3,4,5,6,7} K=3
Output: {4,5,6,7,1,2,3}
Explanation: Rotate the array to right by 3 elements.
*/

#include <iostream>
#include <vector>
using namespace std;

void rotateArray(int arr[], int n, int k) {
    // Create a temporary vector to store the last k elements of the array
    vector<int> temp(n-k-1);
     for (int i = k, j = 0; i < n; i++, j++) {
        temp[j] = arr[i];
    }

    for (int i=k; i<n; i++) {
        arr[i] = arr[i-k-1];
    }

    for (int i=0; i<n-k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the number of positions to rotate: ";
    cin >> k;

    rotateArray(arr, n, k);

    cout << "Rotated array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
