#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m=7;
    vector< vector<int>>v;
    for(int i=1;i<=m;i++){
        vector<int> a(i);
        v.push_back(a);
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<=i;j++){
            if(i==j || j==0){
                v[i][j]=1;
            }
            else{
                v[i][j]=v[i-1][j-1]+v[i-1][j];
            }
        }
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}