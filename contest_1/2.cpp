#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
    vector<vector<int>> v;

    int m, n;

    cin >> n >> m;
    v.resize(n);
    string operation;
    int a, b;
    for(int i = 0; i < m; ++i){
        cin >> operation;
        if (operation == "push"){
            cin >> a >> b;
            v[a].push_back(b);
            cout << v[a].size() << '\n';
            }
        else{
            cin >> a;

            int temp = v[a][v[a].size() - 1];
            v[a].pop_back();
            cout << temp << '\n';

        }
    }

    return 0;
}

