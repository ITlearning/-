// ���ڿ� �� p�� y�� ����
/* 
 �빮�ڿ� �ҹ��ڰ� �����ִ� ���ڿ� s�� �־����ϴ�. 
 s�� 'p'�� ������ 'y'�� ������ ���� ������ True, �ٸ��� False�� return �ϴ� solution�� �ϼ��ϼ���. 
 'p', 'y' ��� �ϳ��� ���� ���� �׻� True�� �����մϴ�. 
 ��, ������ ���� �� �빮�ڿ� �ҹ��ڴ� �������� �ʽ��ϴ�.
*/

// ���� ��� s�� "pPoooyY"�� true�� return�ϰ� "Pyy"��� false�� return�մϴ�.

#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int a = 0;
    int b = 0;
    for(int i = 0; i < s.size(); i++) {
        if((s[i] == 'p' || s[i] == 'P')) {
            a++;
        }else if (s[i] == 'y' || s[i] == 'Y'){
            b++;
        }
    }
    
    if(a == b) {
        answer = true;
    }else if (a != b){
        answer = false;
    }
    // [?��?��] 버튼?�� ?��르면 출력 값을 �? ?�� ?��?��?��?��.
    cout << a << ' ' << b << endl;

    return answer;
}