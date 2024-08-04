#include<iostream>
#include<vector>
using namespace std;
void change(int a[]){
    a[0]=3;
}
void change(int arr[3][3]){
    arr[0][0]=3;
}
int main(){
    int a[3]={1,2,3};
    // cout<<a[0];
    // change(a);
    // cout<<a[0];
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<arr[0][0];
    change(arr);
    cout<<arr[0][0];
}