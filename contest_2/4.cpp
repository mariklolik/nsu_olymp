#include <iostream>

using namespace std;

size_t gcd(size_t a, size_t b){
    size_t r = 1;
    //gcd(a, b) = gcd(a mod b, b) = gcd(b, a mod b)
    //gcd(14, 4) = gcd(2, 4) = gcd(4, 2) = gcd(0, 2) = 2
    //gcd(40, 12) = gcd(4, 12) = gcd(12, 4) = gcd(0, 4)
    while(b != 0){
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main(){
    size_t a, b;
    cin >> a >> b;
    cout << gcd(a, b);
    return 0;
}