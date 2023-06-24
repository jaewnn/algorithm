#include <bits/stdc++.h>
using namespace std;
int N,K;
vector<int> v;
vector<int> sum;
int main(){
    cin >> N >> K;
    v.resize(N);
    sum.resize(N+1,0);
    for(int i=0;i<N;i++){
        cin >> v[i];
    }
    for(int i=1;i<N+1;i++){
        sum[i] = sum[i-1]+v[i-1];
    }

    int max = -9999;
    for(int i=K;i<N+1;i++){
        int c = sum[i] - sum[i-K];
        if(c > max) max =c;
    }
    cout << max;

}