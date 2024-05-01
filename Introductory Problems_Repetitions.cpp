#include <bits/stdc++.h>

using namespace std;

long long sum, N, arr[2000000] ;

int main() {
    string str;
    int max = 1;
    int count = 1;
    cin >> str;
    for(int i = 1; i < size(str); i++){
        if(str[i] == str[i-1]){
            count++;
            if (count > max) max = count;
        }
        else count = 1;
    }
    cout << max;
}
