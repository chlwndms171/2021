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
        // first: 끝나는 시간, second: 시작 시간
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