#include<iostream>
#include<vector>
using namespace std;
void change2Dvector(vector<vector <int>> &v){
    v[0][0]=3333333;
}
void length(vector<vector <int>> &v){
    cout<<v.size();
}
int main(){
    vector<vector <int>> v;
    vector<int> v1;
    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(1);
    vector<int> v2;
    v2.push_back(67);
    v2.push_back(8);
    vector<int> v3;
    v3.push_back(45);
    v3.push_back(65);
    //cout<<v1[1];
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    cout<<v[0][0];
    change2Dvector(v);
    cout<<v[0][0]<<endl;
    length(v);
}