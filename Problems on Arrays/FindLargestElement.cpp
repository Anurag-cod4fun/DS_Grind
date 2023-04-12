/*
Problem 2
- Find the largest element in an Array
*/

#include <iostream>
using namespace std;

int LargestElement(int n, int arr[]) {
    int large = arr[0];

    for (int i=1; i<n; i++) {
        large = max(large , arr[i]);
    }
    return large;
}   

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int ans = LargestElement(n,arr);
    cout << ans;
}