/*
Problem 9
Average of all the elements in the array

Example 1:
Input: N = 5, array[] = {1,2,3,4,5}
Output: 3
Explanation: Average is the sum of all the elements divided by number of elements.Therefore (1+2+3+4+5)/5 = 3.

Example 2:
Input:  N=6, array[] = {1,2,1,1,5,1}
Output: 1.8
Explanation: Average is the sum of all the elements divided by number of elements.Therefore (1+2+1+1+5+1)/6 = 1.8
*/

#include <bits/stdc++.h>
using namespace std;

int average(int arr[], int n)
{
    int sum = 0;
    for (int i=0; i<n; i++) {
        sum += arr[i];
    }

    int avg = sum / n;
    return avg;
}

int main() {
    int n;
    cin >> n;
    int arr[n] = {};
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }  
    int avg = average(arr,n);
    cout << avg;
    return 0;

}