#include <iostream>
using namespace std;

class BubbleSort {
    int arr[100], n;

public:
    void getInput() {
        cout << "Enter number of elements: ";
        cin >> n;
        cout << "Enter " << n << " elements:\n";
        for (int i = 0; i < n; i++)
            cin >> arr[i];
    }

    void sortArray() {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1])
                    swap(arr[j], arr[j + 1]);
            }
        }
    }

    void display() {
        cout << "Sorted Array: ";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    BubbleSort bs;
    bs.getInput();
    bs.sortArray();
    bs.display();
    return 0;
}