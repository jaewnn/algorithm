#include <bits/stdc++.h>
using namespace std;
int lst[6];
vector<int> v;
// 트럭이 시간내에 몇 개가 있는가
// 시간 문제에선 시작과 끝을 이상과 미만이라고 생각하기!!
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int A,B,C;
    cin >> A >> B >> C;
    
    int max = 0;
    for(int i=0;i<6;i++){
        cin >> lst[i];
        if(lst[i] > max) max = lst[i];
    }

    v.resize(max+1,0);

    for(int j = 0; j < 6;j+=2){
        for(int k=lst[j];k<=lst[j+1]-1;k++){
            v[k]++;
        }
    }
    int sum = 0;
    for(int s : v){
        if(s==1) sum += A*1;
        else if(s==2) sum += B*2;
        else if(s==3) sum += C*3;
        else continue;
    }

    cout << sum;
    return 0;

}