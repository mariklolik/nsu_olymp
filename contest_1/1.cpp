#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

bool cmp(const int& a, const int& b){
    return a > b;
}
using namespace std;
int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
// код решения
    int n;
    cin >> n;
    vector<int> v;

    
    for(size_t i = 0; i < n; ++i){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    reverse(v.begin(), v.end());
    for(auto a:v){
        cout << a << ' ';
    }
    cout << '\n';

    sort(v.begin(), v.end(), cmp);
    reverse(v.begin(), v.end());
    for(auto a:v){
        cout << a << ' ';
    }
    
    
    
}
