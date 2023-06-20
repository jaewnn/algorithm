// 난쟁이 문제 순열을 이용해서 풀기

#include <bits/stdc++.h>
using namespace std;
int a[9];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(int i=0;i<9;i++){
        cin >> a[i];
    }
    sort(a,a+9); // 순열을 할때는 항상 오름차순으로 정렬 후 진행
    do{
        for(int i : a) cout << i << " ";
        cout << "\n";
        int sum = 0;
        for(int i =0;i<7;i++) sum += a[i]; // 7개만 슬라이스

        if(sum == 100) break;
    }while(next_permutation(a,a+9)); // 순열을 이용
    for(int i = 0;i<7;i++) cout << a[i] << "\n";
    return 0;
}
