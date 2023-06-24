#include <bits/stdc++.h>
using namespace std;
vector<string> s_lst;
int lst[26] = {0};
int main(){
    int n;
    bool flag = false;
    cin >> n;
    s_lst.resize(n);
    for(int i=0;i<n;i++){
        cin >> s_lst[i];
    }
    
    for(string s : s_lst){
        int temp = s[0] - 'a';
        lst[temp]++;
    }

    for(int i = 0; i < 26; i++){
        if(lst[i]>=5){
            char c = i+'a';
            cout << c;
            flag = true;
        }
    }
    if(flag == false) cout << "PREDAJA";

    return 0;
}