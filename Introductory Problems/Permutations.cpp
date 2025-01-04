#include <bits/stdc++.h>

using namespace std;

int main() {
    int N; cin >> N;
    if(N == 3||N == 2) printf("NO SOLUTION");
    else{
        for(int i = 2; i< N+1; i+=2)
            cout << i << " ";
        for(int i = 1; i< N+1; i+=2)
            cout << i << " ";
    }
}
