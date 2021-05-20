// �� ���� ������ ��
// �� ���� a, b�� �־����� �� a�� b ���̿� ���� ��� ������ ���� �����ϴ� �Լ�, solution�� �ϼ��ϼ���.
// ���� ��� a = 3, b = 5�� ���, 3 + 4 + 5 = 12�̹Ƿ� 12�� �����մϴ�.

#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    vector<long long> v;
  
    
    if(a<b) {
         v.push_back(a);
        while(a < b) {
        a++;
        v.push_back(a);
        }
        for(int i = 0; i < v.size(); i++) {
            answer += v[i];
        } 
    } else {
        v.push_back(b);
        while(a > b) {
            b++;
            v.push_back(b);
        }
        for(int i = 0; i < v.size(); i++) {
            answer += v[i];
        }
    }
   
    return answer;
}