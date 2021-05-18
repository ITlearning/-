// �Ҽ� ã��
// 1���� �Է¹��� ���� n ���̿� �ִ� �Ҽ��� ������ ��ȯ�ϴ� �Լ�, solution�� ����� ������.

// �Ҽ��� 1�� �ڱ� �ڽ����θ� ���������� ���� �ǹ��մϴ�.
// (1�� �Ҽ��� �ƴմϴ�.)


// �����佺�׳׽��� ü
// https://donggoolosori.github.io/2020/10/16/eratos/

#include <string>
#include <cmath>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int *prime = new int[n  + 1];
    for(int i = 2; i <= n; i++) {
        prime[i] = i;
    }
    
    for(int i = 2; i <= sqrt(n); i++) {
        if (prime[i] == 0) {
            continue;
        }
        for(int j = i * i; j <= n; j+= i)
            prime[j] = 0;
    }
    
    for(int i =2; i <= n; i++) {
        if(prime[i] != 0) {
            answer++;
        }
    }
    return answer;
}