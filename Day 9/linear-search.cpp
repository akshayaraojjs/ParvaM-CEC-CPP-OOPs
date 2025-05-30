#include <iostream>
using namespace std;

class LinearSearch {
    int arr[100], n;

public:
    void getInput() {
        cout << "Enter number of elements: ";
        cin >> n;
        cout << "Enter " << n << " elements:\n";
        for (int i = 0; i < n; i++)
            cin >> arr[i];
    }

    void searchElement(int key) {
        bool found = false;
        for (int i = 0; i < n; i++) {
            if (arr[i] == key) {
                cout << "Element " << key << " found at index " << i << endl;
                found = true;
                break;
            }
        }
        if (!found)
            cout << "Element not found.\n";
    }
};

int main() {
    LinearSearch ls;
    ls.getInput();
    int key;
    cout << "Enter element to search: ";
    cin >> key;
    ls.searchElement(key);
    return 0;
}