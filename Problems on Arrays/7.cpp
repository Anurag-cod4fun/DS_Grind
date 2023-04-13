/*
Problem 7
Calculate Sum of the Elements of the Array

Example 1:
Input: N = 5, array[] = {1,2,3,4,5}
Output: 15
Explanation: Sum of all the elements is 1+2+3+4+5 = 15

Example 2:
Input:  N=6, array[] = {1,2,1,1,5,1}
Output: 11
Explanation: Sum of all the elements is 1+2+1+1+5+1 = 11
*/

#include <bits/stdc++.h>

int CalSum(int arr[], int n) {
    int sum = 0;
    for (int i=0; i<n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n;
    int arr[n] = {};
    for (int i=0; i<n; i++) {
        std::cin >> arr[i];
    }
    int sum = CalSum(arr, n);
    std::cout << sum;
    return 0;

}