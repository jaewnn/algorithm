#include <bits/stdc++.h>
using namespace std;
// 단어에 알파벳 유니크 값의 개수를 출력

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string word;
    cin >> word;
    
    for(int i=97;i<128;i++){
        int count=0;
        for(int j=0;j<word.size();j++){
            if(i==word[j]) count++;
        }
        cout << count << " ";
    }
}