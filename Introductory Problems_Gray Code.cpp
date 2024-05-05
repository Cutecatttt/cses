#include<bits/stdc++.h>

using namespace std;

string s;

int main(){
    int n; cin >> n;
    s.insert(0, n, '0');
    for(int i = 1; i <= pow(2,n); i ++){
        cout << s << endl;
        for(int j = 1; j<=n; j++){
            if((i+(int)pow(2,j-1))%(int)pow(2,j) == 0){
                if(s[n-j] == '0') s[n-j] = '1';
                else s[n-j] = '0';
            }
        }
    }
}
