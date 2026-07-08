#include<iostream>
using namespace std;

string reverse(string s) {

    int start = 0;
    int end = s.length() - 1;

    while (start < end) {
        swap(s[start], s[end]);
        start++;
        end--;
    }

    return s;
}

int main() {
    string str = "Hello";

    cout << "Original String: " << str << endl;
    cout << "Reversed String: " << reverse(str) << endl;

    return 0;
}






