#include<iostream>
using namespace std;

void printEvenColumn(int arr[3][4],int n){
     for (int j = 0; j < 4; j+=2) {
        for (int i = 0; i < 3; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}

int main() {
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    printEvenColumn(arr, 3);

    return 0;
}


    