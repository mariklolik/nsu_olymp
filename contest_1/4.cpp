#include <iostream>
#include <algorithm>
#include <utility>
#include <math.h>
#include <vector>
using namespace std;

bool cmp(pair<double, double>& a, pair<double, double>& b){
    double temp1 = atan2(a.second, a.first);
    double temp2 = atan2(b.second, b.first);
    if (temp1 < 0){
        temp1 += 2 * 3.14;
    }
    if (temp2 < 0){
        temp2 += 2 * 3.14;
    }
    return temp1 > temp2;
}
int main(){
    vector<pair<double, double>> v;
    int n;
    cin >> n;
    double x, y;
    for(int i = 0; i < n; ++i){
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end(), cmp);
    reverse(v.begin(), v.end());
    for(auto i:v){
        cout << i.first << ' ' << i.second << '\n';
    }
}