#include <bits/stdc++.h>
using namespace std;
// 경우의 수 문제는 long long 선언하고 접근하는게 좋음
int t, n;
string a, b;
int main(){
    cin >> t;
    while(t--){
        map<string, int> _map;
        cin >> n;
         for(int i = 0; i < n; i++){
            cin >> a >> b;
            _map[b]++;
        }
        long long ret = 1;
        for(auto c : _map){
            ret *= ((long long)c.second + 1);
        }
        ret--; // 한개도 안입는 거 제외
        cout << ret << "\n";
    }
    return 0;
}
