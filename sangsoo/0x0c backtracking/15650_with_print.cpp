// copy solution 
#include <bits/stdc++.h>
using namespace std;

int n, m ;
int arr[10];
bool isused[10];

void func(int k){ // ���� k������ ���� ������
    if (k == m) { // m���� ��� �����ϸ�
        for (int i = 0; i < m; i++){
            cout << arr[i] << ' '; // arr �� ����� ���� ���
        }
        cout << '\n';
        return;
    }
    int st = 1; // ��������, k = 0�϶��� st = 1
    if(k != 0) st = arr[k-1] +1; // k !=0 �̸� st = arr[k-1] +1 ���� ���� + 1 ����
    cout << "st : " << st << " = " << "arr[" << k-1 << "]  "<<  " k : " << k << '\n';
    for(int i = st; i <= n; i++){
        cout << "-- k = " << k << " i = " << i << " --" << '\n';
        if(!isused[i]){ // ���� i�� ������ �ʾ�����
            cout << "arr[" << k << "] = " << i << '\n';
            arr[k] = i; // k��° ���� i�� ����
            cout << "isused[" << i << "] = " << 1 << '\n';
            isused[i] = 1; // i�� ���Ǿ����� ǥ��
            cout << "func(" << k+1 << ")" << '\n';
            func(k+1); // ���� ���� ���Ϸ� �� �ܰ� �� ��
            cout << "finish func(" << k+1 << ") " << '\n'; 
            cout << "isused[" << i << "] = 0" << '\n'; 
            isused[i] = 0; // k��° ���� i�� ���� ��� ��쿡 ���� �� Ȯ�������� ���� i�� ������� �ʾҴٰ� ǥ��
        }
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    func(0);
}

