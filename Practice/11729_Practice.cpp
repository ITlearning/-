#include <bits/stdc++.h>
using namespace std;


void func(int a, int b, int n) { 
    if(n == 1) {
        cout << a << ' ' << b << '\n';
        return;
    }
    func(a,6-a-b, n-1);             
    cout << a << ' ' << b << '\n';  
    func(6-a-b, b, n-1);            
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    cout << (1<<t) - 1 << '\n'; 
    func(1,3,t);
}