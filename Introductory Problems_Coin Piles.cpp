#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    float a, b;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        cin >> a >> b;
        if(a >= b/2 && a <= b*2 && (int)(a+b)%3 == 0)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
