#include <bits/stdc++.h>
using namespace std;
// ROT13 카이사르 암호
string s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    getline(cin,s);
    
    for(int i=0;i<s.size();i++){
        if(s[i] >= 65 && s[i] <= 90){
            if(s[i]+13 > 90){
                char r = s[i] +13 - 90;
                cout << (char) (64 + r);
            }
            else cout << char(s[i] + 13);
        } 
        else if(s[i] >= 97 && s[i] <= 122){
            if(s[i]+13 > 122){
                char r = s[i] +13 - 122;
                cout << (char) (96 + r);
            }
            else cout << char(s[i] + 13);
        }
        else cout << char(s[i]);
    }
}