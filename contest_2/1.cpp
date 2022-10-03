#include <iostream>

using namespace std;
size_t fac(size_t N, size_t M){
    size_t res = 1;
    size_t res2 = 1;
    for(auto i = 2; i < N + 1; i++){
        res = ((res % M) * (i % M)) % M;
        res2 *= i;
        //cout << res << " " << i << endl;
        //cout << res2 << " " << res2 % M << endl;
    }
    return res;
}

int main(){
    size_t N, M;
    cin >> N >> M;
    cout << fac(N, M) << endl;
    return 0;
}