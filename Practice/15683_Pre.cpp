#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board1[10][10]; // ���� ���� �ۼ� ĭ
int board2[10][10]; // �簢 ������ ������ ���� ���� ����
int n,m;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
vector<pair<int,int>> cctv;

bool OOP(int a,int b) {
    return a < 0 || a >= n || b < 0 || b >= m;
}


// (x,y)���� dir �������� �����ϸ� ���� ������ ������ �������� ��� ĭ�� 7�� �ٲ�
void func(int x, int y, int dir) {
    dir %= 4;
    while(1) {
        x += dx[dir];
        y += dy[dir];
        if(OOP(x,y) || board2[x][y] == 6) return;
        if(board2[x][y] != 0) continue;
        board2[x][y] = 7;
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int mn = 0; // �簢 ������ �ּ� ũ�� ��
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> board1[i][j];
            if(board1[i][j] != 0 && board1[i][j] != 6) {
                cctv.push_back({i,j});
            }
            if(board1[i][j] == 0) mn++; // �ϴ� ������ �簢���� ����(0�� �ʱ� ����)�� ���� ��.
        }
    }

    // 1 << (2*cctv.size())�� 4�� cctv.size()���� �ǹ�.
    for(int tmp = 0; tmp < (1<<(2*cctv.size())); tmp++) {
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                board2[i][j] = board1[i][j]; // �簢���� ���忡 ����
        int brute = tmp; // �ӽ� ������ �Űܼ� ����ؾ� tmp�� ���� ���� ������� ���� ���̱� ������ �ű�� �� ����.
        for(int i = 0; i < cctv.size(); i++) {
            int dir = brute % 4;
            brute /= 4;
            int x = cctv[i].X;
            int y = cctv[i].Y;
            if(board1[x][y] == 1) {
                func(x,y,dir); // �ѹ��� �� ���⸸ �̵� �����ϴ�, �翬�� �̷��� ����Ѵ�.
            } else if (board1[x][y] == 2) {
                func(x,y,dir); // dir�� 0 �϶�
                func(x,y,dir+2); // dir�� 0 +2 �̱⿡ (0,2) �� �̷��� �����ϴϱ� ��,�Ʒ� ����, ������ ���ÿ� ���Ⱑ �����ϴ�.
            } else if (board1[x][y] == 3) {
                func(x,y,dir); // 3�� ��� �ѹ��� �ΰ��� ���� ,���� ��� �� ������ �� �̷��� ���ư��ϱ� �ϳ� ���� �ε����� ���ڸ� ȣ��
                func(x,y,dir+1);
            } else if(board1[x][y] == 4) {
                func(x,y,dir);
                func(x,y,dir+1);
                func(x,y,dir+2);
            } else {
                func(x,y,dir);
                func(x,y,dir+1);
                func(x,y,dir+2);
                func(x,y,dir+3);
            }
        }
        int val = 0;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
            val += (board2[i][j]==0);
        mn = min(mn,val);
    }
   cout << mn;
}