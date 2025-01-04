#include <bits/stdc++.h>

using namespace std;
multimap<int,int> mp;
int a, b, ans, cur;

int main() {
    int n; cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a >> b;;
        mp.insert({a, 1});
        mp.insert({b, -1});
    }

    for(auto &it : mp) {
        cur += it.second;
        ans = max(ans,cur);
    }
    cout << ans;
    return 0;
}
