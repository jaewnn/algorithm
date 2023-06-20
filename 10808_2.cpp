#include <bits/stdc++.h>
using namespace std;
// 단어에 알파벳 유니크 값의 개수를 출력
string str;
int cnt[26];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> str;
    for(char a : str){
        cnt[a-'a']++;
    }
    for(int i=0;i<26;i++) cout << cnt[i] << " ";
    return 0;
}