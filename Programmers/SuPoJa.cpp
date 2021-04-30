//���α׷��ӽ� ������ - ���ǰ��

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int mf1[5] = {1,2,3,4,5};
    int mf2[8] = {2,1,2,3,2,4,2,5};
    int mf3[10] = {3,3,1,1,2,2,4,4,5,5};
    int box[3] = {};
    
    // answers�� �� ���鼭 ���� ��� 1 �ø���
    for(int i = 0; i < answers.size(); i++) {
        if(mf1[i%5] == answers[i]) {
            box[0]++;
        }
        if(mf2[i%8] == answers[i]) {
            box[1]++;
        }
        if(mf3[i%10] == answers[i]) {
            box[2]++;
        }
    }
    

    // ���� ū ���� ����� �ɷ�����
    // ���� ���� ū ���� ���� ���� ������ ��쿡�� �ϴ� answer�� �߰�
    int mx = 0;
    for(int i = 1; i < 3; i++) {
        if(box[mx] < box[i]) {
            mx = i;
        } else if(box[mx] == box[i]) {
            answer.push_back(i+1);
        }
    }

    // ���� ū ���� �ϳ��� ��쿡�� �ϳ��� �߰�
    answer.push_back(mx+1);
    // �ϴ� �־���� ���ڵ��� ���������� �ǵ��� sort() ������
    sort(answer.begin(),answer.end());
    return answer;
}