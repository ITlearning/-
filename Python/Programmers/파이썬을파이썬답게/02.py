# 몫과 나머지
# 숫자 a,b가 주어졌을 떄 a를 b로 나눈 몫과 a를 b로 나눈 나머지를 공백으로 구분해 출력하라.
# 기존의 방법처럼 그냥 print에 몫고 나머지를 계산할 수 있지만,
# 파이썬은 이러한 함수가 존재하여 그냥 그 함수 쓰면 된다.

a,b = map(int, input().strip().split(' '))
print(*divmod(a,b))