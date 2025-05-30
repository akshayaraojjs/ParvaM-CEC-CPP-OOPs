#include <iostream>
using namespace std;

class BinarySearch {
    int arr[100], n;

public:
    void getInput() {
        cout << "Enter number of elements: ";
        cin >> n;
        cout << "Enter " << n << " sorted elements:\n";
        for (int i = 0; i < n; i++)
            cin >> arr[i];
    }

    void searchElement(int key) {
        int low = 0, high = n - 1, mid;
        while (low <= high) {
            mid = (low + high) / 2;
            if (arr[mid] == key) {
                cout << "Element " << key << " found at index " << mid << endl;
                return;
            } else if (arr[mid] < key)
                low = mid + 1;
            else
                high = mid - 1;
        }
        cout << "Element not found.\n";
    }
};

int main() {
    BinarySearch bs;
    bs.getInput();
    int key;
    cout << "Enter element to search: ";
    cin >> key;
    bs.searchElement(key);
    return 0;
}