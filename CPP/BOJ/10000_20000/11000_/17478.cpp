#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
void print(int n) {
    for(int i = 0; i < n; ++i) {
        cout << "____";
    }
}

void func(int n, int k) {
    print(n);
    cout << "\"����Լ��� ������?\"" << endl;
    if(n == k) {   
        print(n);
        cout <<"\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"" << endl;
        print(n);
        cout << "��� �亯�Ͽ���." << endl;
        return;
    }else{
        print(n);
        cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���." << endl;
        print(n);
        cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���." << endl;
        print(n);
        cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"" << endl;
        func(n+1,k);
        print(n);
        cout << "��� �亯�Ͽ���." << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int b;
    cin >> b;
    cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������." << endl;
    func(0,b);
}