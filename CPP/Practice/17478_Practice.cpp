#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
void print(int a) {
    for(int i = 0; i < a; ++i) {
        cout << "____";
    }
}
    
    
   
    
void func(int a,int n) {
    print(a);
    cout << "\"����Լ��� ������?\"" << endl;
    if(a == n) {
        print(a);
        cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"" << endl;
        print(a);
        cout << "��� �亯�Ͽ���." << endl;
        return;
    } else {
        print(a);
        cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���."<< endl;
        print(a);
        cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���."<< endl;
        print(a);
        cout <<"���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"" << endl;
        func(a+1,n);
        print(a);
        cout << "��� �亯�Ͽ���." << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������." << endl;
    func(0,n);
}