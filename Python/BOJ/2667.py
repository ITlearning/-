# 단지번호붙이기
import sys
from collections import deque
input = sys.stdin.readline

N = int(input())

board = []
dx = [-1,0,1,0]
dy = [0,-1,0,1]
dist = [[0 for i in range(N)] for i in range(N)]

for i in range(N):
    board.append(list(input().rstrip()))

def dfs(x,y):
    q = deque()
    q.append((x,y))
    m = 1
    dist[x][y] = 1
    while q:
        x,y = q.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if nx < 0 or ny < 0 or nx >= N or ny >= N:
                continue
            if board[nx][ny] == '0' or dist[nx][ny] == 1:
                continue
            dist[nx][ny] = 1
            m += 1
            q.append((nx,ny))
    return m

cnt = 0
box = []
for i in range(N):
    for j in range(N):
        if board[i][j] == '1' and dist[i][j] == 0:
            size = dfs(i,j)
            cnt += 1
            box.append(size)

print(cnt)
box.sort()
for i in box:
    print(i)
