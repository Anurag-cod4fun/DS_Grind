/*
Problem 4
Reverse a given Array (Recursion)
*/

#include <iostream>
using namespace std;

void Recursionreverse(int i, int arr[], int n) {
    
    if (i >= n) {
        return;
    }

    int temp =  arr[i];
    arr[i] = arr[n];
    arr[n] = temp;
    Recursionreverse(i+1,arr,n-1);
}

void reverse(int i, int arr[], int n) {
    while(i < n) {
        int temp = arr[i];
        arr[i] = arr[n];
        arr[n] = temp;

        i++;
        n--;

    } 
}

int main() {
    int arr[6] = {9,8,7,6,5,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i=0; i<n; i++) {
        cout << arr[i];
    }
    cout << endl;
    Recursionreverse(0,arr,n-1);

    for (int i=0; i<n; i++) {
        cout << arr[i];
    }
    cout << endl;

    reverse(0,arr,n-1);
    for (int i=0; i<n; i++) {
        cout << arr[i];
    }
    return 0;
}