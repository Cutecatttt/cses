#include <bits/stdc++.h>

using namespace std;

int main() {
    long long t; cin >> t;
    long long x[t], y[t];
    for(int m = 0; m < t; m++)
        cin >> x[m] >> y[m];
    for(int m = 0; m < t; m++){   
        if(x[m] >= y[m]){
            long long S = (x[m]-1)*(x[m]-1);
            if(x[m]%2 == 0)
                cout << S + 2*x[m] - y[m] << endl;
            else
                cout << S + y[m] << endl;
        }
        else{
            long long S = (y[m]-1)*(y[m]-1);
            if(y[m]%2 == 1)
                cout << S + 2*y[m] - x[m] << endl;
            else
               cout << S + x[m] << endl;
        }
    }
    return 0;
}
