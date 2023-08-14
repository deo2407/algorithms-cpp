#include <bits/stdc++.h>

#define ll long long

using namespace std;

void merge(int arr[], int begin, int mid, int end) {
    int m1 = begin, m2 = mid + 1, resI = 0;
    int res[end - begin + 1];

    while (m1 < mid + 1 && m2 < end + 1) {
        if (arr[m1] < arr[m2]) 
            res[resI++] = arr[m1++];
        else
            res[resI++] = arr[m2++];
    }
    while (m1 < mid + 1) {
        res[resI++] = arr[m1++];
    }
    while (m2 < end + 1) {
        res[resI++] = arr[m2++];
    }
    for (int i = 0; i < end - begin + 1; i++) {
        arr[begin + i] = res[i];
    }
}

void mergeSort(int array[], int begin, int end)
{
    if (begin == end)
        return; 
  
    int mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);

    merge(array, begin, mid, end);
}

int main() {
    int arr[] {4, 1, 2, 3, 7, 1, 2};

    for (int num : arr) {
        cout << num << ' ';
    }
    cout << endl;
    mergeSort(arr, 0, sizeof(arr) / sizeof(int) - 1);

    for (int num : arr) {
        cout << num << ' ';
    }
}
