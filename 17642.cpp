// Problem Information
// 17642. 최대 조작 횟수
// https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&problemLevel=4&problemLevel=5&contestProbId=AYj_Dz-6qLgDFASl&categoryId=AYj_Dz-6qLgDFASl&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=5&pageSize=10&pageIndex=2

// Code Authored by CarryKim

#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
ll solve(ll A, ll B) {
    if(A == B) return 0;
    if(abs(A-B) == 1 || A > B) return -1;
    ll diff = abs(A-B);
    if(diff%2 == 0) return diff/2;
    else return (diff-1)/2;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int i=1; i<=T; i++) {
        ll A,B;
        cin >> A >> B;
        cout << "#" << i << " " << solve(A,B) << "\n";
    }
    return 0;
}
