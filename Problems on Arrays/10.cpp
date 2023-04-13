/*
Problem 9
Median of all the elements in the array

Example 1:
Input: [2,4,1,3,5]
Output: 3

Example 2:
Input: [2,5,1,7]
Output: 3.5
*/

#include <bits/stdc++.h>
using namespace std;

void median(int arr[], int n)
{
    sort(arr, arr+n);

    if (n % 2 != 0) {
        cout << (double)arr[(n+1)/2 - 1];
    }
    else {
        cout << (double)(arr[n/2 - 1] + arr[n/2])/2;
    }

}

int main() {
    int n;
    cin >> n;
    int arr[n] = {};
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }  
     median(arr,n);

    return 0;

}