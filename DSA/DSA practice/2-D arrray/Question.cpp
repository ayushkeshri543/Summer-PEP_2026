// #include<iostream>
// using namespace std;

// bool search(int arr[][],int row,int col,int target){
//     for(int i= 0;i<3;i+){
//         for(int j = 0;j<3;j++){
//             if(arr[i][j]==target) return true;
//         }
//     }
//     return false;
// }


// int main(){
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9}
// }


// #include<iostream>
// using namespace std;

// void sum(int arr[][3],int row,int col){

//     for(int i=0;i<row;i++){
//     int sum = 0;
//     for(int j=0;j<col;j++){
//         sum += arr[i][j];
     
//     }
//     cout<<sum <<endl;
// }

// }

// int main()
// {
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
// }


#include<iostream>
using namespace std;

void maxSum(int arr[][3], int row, int col) {
    int maxSum = INT_MIN;
    int rowIndex = -1;

    for (int i = 0; i < row; i++) {
        int sum = 0;

        for (int j = 0; j < col; j++) {
            sum += arr[i][j];
        }

       cout  << i  << sum << endl;

        if (sum > maxSum) {
            maxSum = sum;
            rowIndex = i;
        }
    } 

   
}

int main() {
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    maxSum(arr, 3, 3);

    return 0;
}