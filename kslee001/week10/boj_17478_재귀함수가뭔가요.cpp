#include <iostream>
using namespace std;

string start = "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
string question =  "\"����Լ��� ������?\"\n";
string ans1 = "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
string ans2 = "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
string ans3 = "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
string ans4 = "��� �亯�Ͽ���.\n";
string ans5 = "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
// string start = "start\n";
// string question = "\"question?\"\n";
// string ans1 = "\"answer1\n";
// string ans2 = "answer2\n";
// string ans3 = "answer3\"\n";
// string ans4 = "answer4\n";

void func(int n, int idx){
    // base case
    if(n==0) {
        for(int i=0; i<idx; ++i){cout << "____";}
        cout << question;
        for(int i=0; i<idx; ++i){cout << "____";}
        cout << ans5;
        for(int i=0; i<idx; ++i){cout << "____";}
        cout << ans4;
        return;
    }
    
    // recursive case
    for(int i=0; i<idx; ++i){cout <<"____";}
    cout << question;
    for(int i=0; i<idx; ++i){cout <<"____";}
    cout << ans1;
    for(int i=0; i<idx; ++i){cout <<"____";} 
    cout << ans2;
    for(int i=0; i<idx; ++i){cout <<"____";} 
    cout << ans3;
    n--;
    idx++;
    func(n, idx);
    for(int i=0; i<idx-1; ++i){cout<<"____";}
    cout << ans4;
};



int main(){
    int n; cin >>n;    
    cout << start;
    int idx = 0;
    func(n, idx);
}