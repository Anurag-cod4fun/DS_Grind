/*
Problem 3
Find the second largest and second smallest element in an array
*/

#include <iostream>
using namespace std;

void FindSecSmallLarge(int n, int arr[]) {
    int minN = INT_MAX, maxN = INT_MIN;

    for (int i=0; i<n; i++) {
        minN = min(minN, arr[i]);
        maxN = max(maxN, arr[i]);
    }

    int SecMin = INT_MAX, SecMax = INT_MIN;
    for (int i=0; i<n; i++) {
        if (arr[i] < SecMin && arr[i] != minN) {
            SecMin = arr[i];
        }
        if (arr[i] > SecMax && arr[i] != maxN) {
            SecMax = arr[i];
        }
    }

    cout << SecMin << "\n";
    cout << SecMax;


}

int main() {
    int n; 
    cin >> n;
    int arr[n];

    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    FindSecSmallLarge(n,arr);
    return 0;
}