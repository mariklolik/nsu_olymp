#include <iostream>
#include <vector>

using namespace std;

vector<int> eratosphene(const size_t n){
    //В классической формулировке n - число не больше которого надо искать простые
    //Пусть n - количество
    vector<int> v(7920, 0);
    // В условии посчитано 1000е простое число, воспользуемся этим
    size_t i = 0;
    size_t p = 2;
    while (i <= n)
    {
        for (int j = p * p; j < 7920; j+=p)
        {
            v[j] = -1;
        }
        for(int j = p + 1; j < 7920; j++){
            if(v[j] != -1){
                p = j;
                break;
            }
        }
        i += 1;
    }
    vector<int> v2;
    for(int i = 0; i < 7920; i++){
        if(v[i] != -1){
            v2.push_back(i);
        }
    }
    return v2;
    
}
int main(){
    size_t n;
    cin >> n;
    auto v = eratosphene(n);
    cout << v[n + 1];
    return 0;
}
