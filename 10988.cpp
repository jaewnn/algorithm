#include <bits/stdc++.h>
using namespace std;
// 팰린드롬인지 확인하기
// 글자의 양끝에서 문자를 비교하면서 넘어감
// 만약 다르면 브레이크

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string str;
    cin >> str;
    int len = str.size();
    int mid;
    bool flag = true;
    if(str.size()%2==0){ // 짝수인 경우
        mid = str.size()/2;
        for(int i=0;i<=mid;i++){
            if(str[i]!=str[len-1-i]){
                flag = false;
                break;
            }
        }
    }
    else{
        mid = str.size()/2;
        for(int i=0;i<=mid;i++){
            if(str[i]!=str[len-1-i]){
                flag = false;
                break;
            }
        }
    }
    if(flag == false) cout << 0;
    else cout << 1;
    return 0;
}