#include <bits/stdc++.h>

using namespace std;

string s, t;
int a[30];

int main() {
    cin >> s;
    for(int x : s){
        a[x-65]++;
    }
    int check = 0;
    int pos = -1;
    for(int i = 0; i <26; i++){
        if(a[i]%2 == 1){
            check++;
            pos = i;
            if (check > 1){
            cout << "NO SOLUTION";
            return 0;
            }
        }
        else{
            for(int j = 0; j < a[i]/2; j++)
                t += (char)(i+65);
        }
    }
    if(pos != -1){
        for(int i = 0; i < a[pos]/2; i++){
            t += (char)(pos+65);
        }
        string v = t; reverse(v.begin(), v.end());
        cout << t+(char)(pos+65)+v;
    }
    else{
        string v = t; reverse(v.begin(), v.end());
        cout << t+v;
    }
}
