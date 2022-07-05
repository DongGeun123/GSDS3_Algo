#include <iostream>
#include <algorithm>

using namespace std;

int nums[10];
int res[10];
int N, M;

void func(int idx, int prev) {
    if (idx >= M) {
        for (int i = 0; i < M; ++i) {
            cout << res[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 0; i < N; ++i) {
        if (nums[i] < prev) continue;
        res[idx] = nums[i];
        func(idx + 1, nums[i]);
    }
}

int main() {
    freopen("input.txt", "r", stdin);
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> N >> M;
    for (int i = 0; i < N; ++i) {
        cin >> nums[i];
    }
    sort(nums, nums + N);
    func(0, 0);

    return 0;
}