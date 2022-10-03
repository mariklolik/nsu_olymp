#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    map<string, vector<int64_t>> m;
    int n;
    cin >> n;
    string a;
    int64_t b;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        m[a].push_back(b);        
    }

    for(auto& [key, value]:m){
        cout << key << " ";
        for(auto v:value){
            cout << v << " ";
        }
        cout << "\n";
    }
    return 0;
}