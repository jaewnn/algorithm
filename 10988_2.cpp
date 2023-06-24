#include <bits/stdc++.h>
using namespace std;
string s,temp;
// 펠린드롬 확인하기 - reverse를 사용해서 풀어보기
int main(){
    cin >> s;
    temp = s;
    reverse(temp.begin(),temp.end());
    if(temp==s) cout << 1<< "\n";
    else cout << 0 << "\n";

    return 0;
}
