#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long

//hàm pow không cho kết quả chính xác
ll power(ll a, ll b)
{
    ll res = 1;
    while (b > 0) {
        if (b & 1) {
            res = (res * a);
        }
        a = (a * a);
        b >>= 1;
    }
    return res;
}
 
void ans(ll x){
    if(x<10){
        cout << x << endl;
        return;
    }
    ll k = 1;
    while(x-9*k*power(10,k-1) >= 0){
        x = x-9*k*power(10,k-1);
        k++;
    }
    if(x % k == 0){
        cout << ((ll)(power(10,k-1)+(x/k)-1))%10 << endl;
    }
    else{
        ll y = power(10,k-1)+(x)/k;
        ll z = x%k;
        cout << ((ll)(y/power(10,k-z)))%10 << endl;
    }
}
 
int main() {
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        ans(x);
    }
    return 0;
}
