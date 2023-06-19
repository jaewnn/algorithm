//  일곱난쟁이
// 이중 중첩문을 이용하여 합계가 100이면 탈출하게 하여 코드 구현
#include <bits/stdc++.h>
using namespace std;
vector<int> all;

int sum_of_list(vector<int> list,int i,int j){
    int sum=0;
    for(int k=0;k<list.size();k++){
        if(k!=i && k!=j){
            sum += list[k];
        }
    }
    return sum;
}

int main(){
    for(int k=0;k<9;k++){
        int temp;
        cin >> temp;
        all.push_back(temp);
    }
    int i,j,temp;
    for(i=0;i<9;i++){
        for(j=i+1;j<9;j++){
            temp = sum_of_list(all,i,j);
            if(temp == 100){
                break;
            }
        }
        if(temp == 100){
                break;
        }
    }
    int notprint[2];
    notprint[0] = all[i];
    notprint[1] = all[j];
    
    sort(all.begin(),all.end(),less<int>());

    for(int a : all){
        if(a!=notprint[0] && a!=notprint[1])
            cout << a << "\n";
    }

    return 0;
}