#include<iostream>
using namespace std;

void wavePrint(int arr[][5],int row,int col){
    for(int c = 0;c<col;c++){
        if(c%2==0){
            for(int r = 0;r<row;r++){
                cout<<arr[r][c]<<" ";
            }
        }else{
            for(int r = row-1;r>-1;r--){
                cout<<arr[r][c]<<" ";
            }
        }
    }
}