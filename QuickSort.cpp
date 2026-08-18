#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& arr, int st, int end) {
    int pivot = arr[end];
    int i = st - 1;

    for (int j = st; j < end; j++) {
        if (arr[j] < pivot) {
            i++;

            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    i++;

    int temp = arr[i];
    arr[i] = arr[end];
    arr[end] = temp;

    return i;
}

void quickSort(vector<int>& arr, int st, int end) {
    if (st < end) {
        int pivotIndex = partition(arr, st, end);

        quickSort(arr, st, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, end);
    }
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

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}