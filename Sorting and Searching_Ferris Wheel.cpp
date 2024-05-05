#include<bits/stdc++.h>
 
using namespace std;
 
int n, x, a[200005], k, ans;
 
int main(){
    cin >> n >> x;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    n--;
    while(k <= n){
        ans++;
        if(a[n]+a[k] <= x){
            k++; n--;
        }
        else{
            n--;
        }
    }
    cout << ans;
