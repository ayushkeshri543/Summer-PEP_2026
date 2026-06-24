#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 32, 55, 1, 26, 53, 78};
    int key = 53;

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {

        if (arr[i] == key) {

            if (key > 20) {
                cout << "Double value = " << key * 2 << endl;
            } else {
                cout << "Half value = " << key / 2.0 << endl;
            }

            return 0;
        }
    }

    cout << "Key not found!" << endl;

    return 0;
}