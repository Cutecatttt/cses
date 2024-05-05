#include<bits/stdc++.h>

using namespace std;

int n, m , k, a[200005], b[200005], x, y, ans;

int main(){
    cin >> n >> m >> k;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    sort(a,a+n); sort(b,b+m);
    while(x < n && y < m){
        if(a[x]+k >= b[y] && a[x]-k <= b[y]){
            ans++;
            x++; y++;
        }
        else{
            if(a[x]+k < b[y])  x++;
            else y++;
        }
    }
    cout << ans;
}
