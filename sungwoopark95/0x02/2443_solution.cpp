#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    for (int i=num;i>=1;i--) {
        cout << string(num-i, ' ');
        cout << string((2*i)-1, '*') << endl;
    }

    return 0;
}