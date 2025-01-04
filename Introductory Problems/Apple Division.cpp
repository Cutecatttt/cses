#include <bits/stdc++.h>

using namespace std;

int n;
long long sum, ans, a[30], b[30];
long long MIN = LLONG_MAX;

void check(long long x){
    long long y = abs(sum - 2*x);
    if(y < MIN) MIN = y;
}

void Try(int x){
    for(int i = 0; i <=1; i++){
        ans += i*a[x];
        b[x] +=i;
        if(x==n) check(ans);
        else Try(x+1);
        ans -= b[x]*a[x];
        b[x]=0;
    }
}

int main() {
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        sum += a[i];
    }
    Try(1);
    cout << MIN;
}
