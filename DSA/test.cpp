#include<iostream>
using namespace std;
int main(){
    
    // int marks;
    // int leaves;
    // cin>>marks;
    // cin>>leaves;

    // Conditional Statement:-


// if(marks>50 && leaves<10){
//     cout<<"Student is Pass"<<endl;
// }
// else{
//     cout<<"Student is Fail";
// };



// Switch Cases:-
// switch grade = "A";

// switch(grade){
//     case 'A':
//        cout<<"Excellent"<<endl;
//     case 'B':
//        cout<<"Good"<<endl;
//     case 'C':
//        cout<<"Average"<<endl;
//     default:
//        cout<<"Invalid"<<endl;

// Ternarry Operator:-

// int x;
// int y;
// cin>>x>>y;
// cout<<(x>y?x:y);


// Loops:-
// int i=0;
// for(int i=0;i<5;i++){
//     cout<<i<<endl;
// }

// int i=0;
// while(i<5){
//     cout<<i<<endl;
//     i++;
// }
// int i;
// do{
//     cout<<i<<endl;
//     i++;
// }
// while(i<5);

int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(i==1 || i==n || j==1 ||j==n){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
       
    }
     cout<<endl;


}
return 0;

}


