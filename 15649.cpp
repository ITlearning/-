#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int n,m;
int arr[10];
int isused[10];

void func(int k) {
    if(k == m) {
        for(int i = 0; i < m; i++) {
            cout << arr[i] << ' ';
        }
        cout << endl;
        return; // ������ �ؼ� �ٷ� �� �ܰ�� �ö�
    }

    for(int i = 1; i <= n; i++) {
        if(!isused[i]) { // ���� ������ ���� ���
            arr[k] = i;
            isused[i] = 1;
            func(k+1);
            isused[i] = 0;  // ��� �� ���� �ڱ� �ڽ��� ���� ����Ѱ� �ƴϴ� false�� �����.
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    func(0);
}