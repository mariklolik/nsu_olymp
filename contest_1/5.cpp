#include <iostream>
#include <set>
using namespace std;

int main(){
    set<long long int> a; 
    int n;
    cin >> n;
    char oper;
    long long int num;
    for (size_t i = 0; i < n; i++)
    {
        cin >> oper >> num;
        switch (oper)
        {
        case '+':
            a.insert(num);
            break;
        
        case '?':
            if(*a.find(num) == num){
                cout << "da\n";
            }
            else{
                cout << "net\n";
            }
            break;
        }
    }
    
    return 0;
}