#include <iostream>
using namespace std;

class LinearSearch {
    int arr[100], n;

public:
    void getInput() {
        cout << "Enter number of elements: ";
        cin >> n;
        cout << "Enter " << n << " elements:\n";
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
    }

    void searchElement(int key) {
        bool found = false;  // Flag - 0
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


// Tracing:
// 8
// arr = [5, 8, 3, 6, 10, 9, 18, 17]     [2, 8, 6, 3, 15, 19, 17, 18, 11] => 17
// Key : 10
// flag - 0
// Step 1: i = 0
        // arr[0] == 10 => 5 == 10 - F
        // i + 1
// Step 2: i = 1
        // arr[1] == 10 => 8 == 10 - F
        // i + 1
// Step 3: i = 2
        // arr[2] == 10 => 3 == 10 - F
        // i + 1
// Step 4: i = 3
        // arr[3] == 10 => 6 == 10 - F
        // i + 1
// Step 5: i = 4
        // arr[4] == 10 => 10 == 10 - T
        // Return i => 4
// flag = 1

    
         