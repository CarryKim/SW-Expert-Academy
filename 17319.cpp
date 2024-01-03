// Problem Information
// 17319. 문자열문자열
// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AYgEiwbKy48DFARP

// Code Authored by CarryKim

#include<bits/stdc++.h>
using namespace std;
 
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int i=1; i<=T; i++) {
        int N;
        cin >> N;
        string S;
        cin >> S;
        if(S.size()%2) cout << "#" << i << " No\n";
        else{
            if(S == S.substr(S.size()/2) + S.substr(S.size()/2)) cout << "#" << i << " Yes\n";
            else cout << "#" << i << " No\n";
        }
    }
    return 0;
}
