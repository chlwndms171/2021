#include <string>
#include <vector>
#include <iostream>]
#include <algorithm>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> v;
    if (n == 2)
        return 1;
    else if (n == 3)
        return 2;
    else {
        v.push_back(2);
        v.push_back(3);
        int m = 4;
        while (m <= n) {
            int j = v.size();
            int n=0;
            for (int i = 0; i < j; i++) {
                if (m % v[i] == 0) { n = 0; break; }
                else n = 1;
            }
            if (n == 1) {
                v.push_back(m);
                m++;
            }
            else m++;
        }

        answer = v.size();
        return answer;
    }
}
int main() {
    int n;
    cin >> n;
    int answer = solution(n);
    cout << answer;
}

// 소수 구하는 문제!! 푼 것 같음!!!