#include <iostream>
#include <set>
using namespace std;

int main(){
    multiset<long long int> s;
    int n;
    cin >> n;
    char oper;
    long long int num;
    for (int i = 0; i < n; i++)
    {   
        cin >> oper >> num;
        switch (oper)
        {
        case '+':   
            s.insert(num);
            break;
        case '-':   
            if(*s.find(num) == num){
                s.erase(s.find(num));
            }
            break;
        case '?':   
            if(*s.find(num) == num){
                cout << "da\n";
            }    
            else{
                cout << "net\n";
            }
            break;
        }
    }
        
}