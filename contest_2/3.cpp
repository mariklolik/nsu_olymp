#include <iostream>
using namespace std;

int minfactor(int n){
    for(int i = 2; i * i <= n; ++i){
        if (n % i == 0){
            return i;
        }
    }
    return n;
}

void factors(int n){
    
    while(n != 1){
        int a = minfactor(n);
        cout << a << " ";
        n /= a;
    }
}


int main(){
    int n;
    cin >> n;
    factors(n);
    return 0;
}