#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    // �������� ������ ����, ���� ��ġ�� �ִ� �������� ���Ѵ�.
    for(int i = 0; i < completion.size(); ++i) {
        if(participant[i] != completion[i]) {
            return participant[i];
        }
    }
    // �� �� ���� ���� �ڸ��� �ٸ� �̸��� �ִ� ������ ��� ���ָ� ���� �����̱⶧���� ����� ���ش�.
    return participant[participant.size()-1];
	// �װ� �ƴϰ� �ƾ� �����ڿ� ���� ������� ������ ������ ������ش�.
}