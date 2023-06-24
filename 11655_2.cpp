#include <bits/stdc++.h>
using namespace std;
// ROT13 카이사르 암호 - 아스키코드로 변환한 숫자가 아닌 그냥 알파벳 그자체 사용
// 이것보다 숫자가 생각하는 시간이 더 적은 것 같다
string s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    getline(cin,s);
    
    for(int i=0;i<s.size();i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            if(s[i]+13 > 'Z'){
                char r = s[i] +13 - 'Z' - 1;
                cout << (char) ('A' + r);
            }
            else cout << char(s[i] + 13);
        } 
        else if(s[i] >= 'a' && s[i] <= 'z'){
            if(s[i]+13 > 'z'){
                char r = s[i] +13 - 'z' -1;
                cout << (char) ('a' + r);
            }
            else cout << char(s[i] + 13);
        }
        else cout << char(s[i]);
    }
}