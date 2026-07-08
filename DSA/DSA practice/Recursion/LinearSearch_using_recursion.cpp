#include<iostream>
using namespace std;

bool LinearSearch(int arr[],int size,int key){
    if(size == 0) return false;
    if(arr[0]==key) return true;

    return(arr + 1,size - 1,key);

    
}
int main() {
    int arr[8] = {2, 3, 4, 5, 6, 7, 8, 9};
    int key;

    cout << "Enter the element to search: ";
    cin >> key;

    if (LinearSearch(arr, 11, key))
        cout << "Element Found";
    else
        cout << "Element Not Found";

    return 0;
}
