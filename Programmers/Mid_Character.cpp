// ��� ���� ��������
// �ܾ� s�� ��� ���ڸ� ��ȯ�ϴ� �Լ�, solution�� ����� ������. �ܾ��� ���̰� ¦����� ��� �α��ڸ� ��ȯ�ϸ� �˴ϴ�.

#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    if(s.size() % 2 != 0) {
        int mid = s.size() / 2;
        answer = s[mid];
    } else {
        int mid = s.size() / 2;
        answer += s[mid - 1];
        answer += s[mid];
    }
    
    return answer;
}