/* 
Problem 1
 - Find the Smalled Element in an Array 
*/

#include <iostream>
using namespace std;

int SmallestElement(int n, int arr[]) {
    int small = arr[0];

    for (int i=1; i<n; i++) {
        small = min(small , arr[i]);
    }
    return small;
}   

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int ans = SmallestElement(n,arr);
    cout << ans;
}