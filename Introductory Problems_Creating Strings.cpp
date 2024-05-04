#include <bits/stdc++.h>

using namespace std;

int N, use[10];
string X, Y;
set<string> KQ;

void Try(int i){
    for(int j = 0; j < N; j++){
        if(!use[j]){
            use[j] = 1;
            Y[i] = X[j];
            if(i == N-1){
                KQ.insert(Y);
            }
            else Try(i+1);
            use[j] = 0;
        }
    }
}

int main() {
    cin >> X;
    Y = X;
    N = X.size();
    Try(0);
    cout << KQ.size() << endl;
    for(string x : KQ) cout << x << endl;
    return 0;
}
