#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string& a, string& b){
    return a > b;
}
int main(){
    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++){
        string a, b;
        cin >> a >> b;
        v.push_back(a + b);
        v.push_back(b + a);
    }
    sort(v.begin(), v.end(), cmp);
    reverse(v.begin(), v.end());
    for(auto i:v){
        cout << i << '\n';
    }
}