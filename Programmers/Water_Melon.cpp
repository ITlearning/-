// ���ڼ��ڼ��ڼ��ڼ��ڼ�?

// ���̰� n�̰�, "���ڼ��ڼ��ڼ�...."�� ���� ������ �����ϴ� ���ڿ��� �����ϴ� �Լ�, solution�� �ϼ��ϼ���.
// ������� n�� 4�̸� "���ڼ���"�� �����ϰ� 3�̶�� "���ڼ�"�� �����ϸ� �˴ϴ�.
#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            answer = answer + "?��";
        }else {
            answer = answer + "�?";
        }
    }
    return answer;
}