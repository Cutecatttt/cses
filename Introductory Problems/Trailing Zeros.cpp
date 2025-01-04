#include <bits/stdc++.h>

using namespace std;

int n, sum;
int i = 1;

int main() {
    cin >> n;
    while (pow(5,i) <= n){
        sum += n/pow(5,i);
        i++;
    }
    cout << sum; 
    return 0;
}
