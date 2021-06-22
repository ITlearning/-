# 그리디
# 당장 좋은 것만 선택하는 그리디

# 그리디는 기준에 따라 좋은 것을 선택하는 알고리즘이므로 문제에서
# '가장 큰 순서대로', '가장 작은 순서대로' 와 같은 기준을 알게 모르게 제시해준다.

# 당신은 음식점의 계산을 도와주는 점원이다. 카운터에는 거스름돈으로 사용할 500원, 100, 50원, 10원 짜리 동전이 무한히 존재한다고 가정한다.
# 손님에게 거슬러 줘야 할 돈이 N원일 때 거슬러 줘야할 동전의 최소 개수를 구하라. 단, 거슬러 줘야 할 돈 N은 항상 10의 배수이다.

import sys
input = sys.stdin.readline
N = int(input())
cnt = 0
coin = [500,100,50,10]
for i in coin:
    cnt += N // i
    N %= i
print(cnt)

# 문제에 접근하는 방법은 유사하므로 거스름돈 문제는 그리디 알고리즘을 설명할 때 자주 소개되는 문제