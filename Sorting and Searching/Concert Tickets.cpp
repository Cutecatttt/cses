#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    multiset<int> s;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    for(int i = 0; i < m; i++) {
        int a;
        cin >> a;
        auto it = s.upper_bound(a);
        if(it != s.begin()) {
            it--;
            cout << *it << endl;
            s.erase(it);
        } else {
            cout << "-1" << endl;
        }
    }

    return 0;
}
