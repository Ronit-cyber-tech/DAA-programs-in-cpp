#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int st, int mid, int end) {
    vector<int> temp;

    int i = st;
    int j = mid + 1;

    // Compare elements from both halves
    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        }
        else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // Add remaining elements of left half
    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    // Add remaining elements of right half
    while (j <= end) {
        temp.push_back(arr[j]);
        j++;
    }

    // Copy sorted elements back
    for (int k = 0; k < temp.size(); k++) {
        arr[st + k] = temp[k];
    }
}

void mergeSort(vector<int>& arr, int st, int end) {
    if (st >= end) {
        return;
    }

    int mid = st + (end - st) / 2;

    // Sort left half
    mergeSort(arr, st, mid);

    // Sort right half
    mergeSort(arr, mid + 1, end);

    // Merge both halves
    merge(arr, st, mid, end);
}

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}