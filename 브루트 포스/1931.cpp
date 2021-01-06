#include <bits/stdc++.h>
using namespace std;

int n;
int ans;
vector<pair<int, int>> v;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> n;
    v.resize(n);
    for (auto& i : v) {
        // first: ������ �ð�, second: ���� �ð�
        cin >> i.second >> i.first;
    }

    sort(v.begin(), v.end());

    int last_end = 0;
    for (auto i : v) {
        if (last_end <= i.second) {
            last_end = i.first;
            ans++;
        }
    }

    cout << ans << endl;
}