#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " sorted elements:\n";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    int st = 0;
    int end = n - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (arr[mid] == target) {
            cout << "Element found at index " << mid << endl;
            return 0;
        }
        else if (arr[mid] < target) {
            st = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    cout << "Element not found" << endl;

    return 0;
}
