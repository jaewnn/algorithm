#include <bits/stdc++.h>
using namespace std;

const int n = 9;
const int k = 7;
int a[n];
vector<int> c;
// 깊이 우선 탐색을 하려면 항상 종료 조건을 만들어야한다.
bool combi(int start, vector<int>& b) {
    if(b.size() == k) {
        int sum = accumulate(b.begin(), b.end(), 0); // 합을 구해주는 코드
        if(sum == 100) {
            c = b; // Directly assign b to c
            return true; // Return true indicating the solution is found
        }
        return false;
    }

    for(int i = start + 1; i < n; i++) {
        b.push_back(a[i]);
        if(combi(i, b)) // If solution found, immediately return true
            return true;
        b.pop_back();
    }

    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> b;
    combi(-1, b);
    sort(c.begin(), c.end());
    
    for(int num : c) {
        cout << num << "\n";
    }

    return 0;
}
