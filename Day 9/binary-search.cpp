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

// n = 10
// arr = [5, 8, 9, 15, 17, 18, 21, 45, 53, 55]    [2, 3, 5, 9, 13, 19, 25, 33, 36, 42] => 3, 33
//        0  1  2  3   4   5   6   7   8   9

// 1st Usecase:
// Key: 53
// low = 0, high = n - 1 => 10 - 1 = 9
// low = 0, high = 9 - Initially
// Step  1: while(low <= high) - T
//          while(0 <= 9) - T
        //  mid = (0 + 9) / 2 => (9/2) => 4  
        //  if(a[mid] == 53)
        //  if(a[4] == 53 ) => 17 == 53 - F
        //  else  if(17 < 53) - T
        //  low = mid + 1 => 4 + 1 => 5 

// Step  2: while(5 <= 9) - T
        //  mid = (5 + 9) / 2 => (14/2) => 7  
        //  if(a[mid] == 53)
        //  if(a[7] == 53 ) => 45 == 53 - F
        //  else  if(45 < 53) - T
        //  low = mid + 1 => 7 + 1 => 8 

// Step  3: while(8 <= 9) - T
        //  mid = (8 + 9) / 2 => (17/2) => 8  
        //  if(a[mid] == 53)
        //  if(a[8] == 53 ) => 53 == 53 - T
        //  return mid = 8
        //  Key Found at 8th index

// n = 10
// arr = [5, 8, 9, 15, 17, 18, 21, 45, 53, 55]
//        0  1  2  3   4   5   6   7   8   9

// 2nd Usecase:
// Key: 5
// low = 0, high = n - 1 => 10 - 1 = 9
// low = 0, high = 9 - Initially
// Step  1: while(low <= high) - T
//          while(0 <= 9) - T
        //  mid = (0 + 9) / 2 => (9/2) => 4  
        //  if(a[mid] == 5)
        //  if(a[4] == 5 ) => 17 == 5 - F
        //  else  if(17 < 5) - F
        //  else 
        //       high = mid - 1 => 4 - 1 => 3

// Step  2: while(low <= high) - T
//          while(0 <= 3) - T
        //  mid = (0 + 3) / 2 => (3/2) => 1  
        //  if(a[mid] == 5)
        //  if(a[1] == 5 ) => 8 == 5 - F
        //  else  if(8 < 5) - F
        //  else 
        //       high = mid - 1 => 1 - 1 => 0

// Step  3: while(low <= high) - T
//          while(0 <= 0) - T
        //  mid = (0 + 0) / 2 => (0/2) => 0  
        //  if(a[mid] == 5)
        //  if(a[0] == 5 ) => 5 == 5 - T
        //  return mid = 0
                