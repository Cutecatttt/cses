#include <bits/stdc++.h>

using namespace std;

int cot[100], d1[100], d2[100], X[100], res[100][100], Y;

void Try(int n){
    // duyet tat ca kha nang X[i] co the nhan
    for(int j = 1; j <= 8; j++){
        // chuan bi gan
        if(cot[j]==0 && d1[i-j+8]==0 && d2[i+j-1]==0 && res[i][j]==0){
            X[i] = j;
            cot[j] = d1[i-j+8] = d2[i+j-1] = 1;
            if(i == 8) Y++;
            else Try(i+1);
            //backtrack
            cot[j] = d1[i-j+8] = d2[i+j-1] = 0;
        }
    }
}

int main() {
    char a;
    for(int i = 1; i <= 8; i++)
        for(int j = 1; j <= 8; j++){
            cin >> a;
            if(a=='*') res[i][j] = 1;
        }
    Try(1);
    cout << Y;
}
