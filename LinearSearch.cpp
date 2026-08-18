#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target element: ";
    cin >> target;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cout << "Element found at index " << i << endl;
            return 0;
        }
    }

    cout << "Element not found" << endl;

    return 0;
}