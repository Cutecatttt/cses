#include<bits/stdc++.h>
 
using namespace std;
 
long long ans(long long x){
    long long ans = (x*x - 1)*x*x;
    long long sum = 0;
    // vòng ngoai cung
    sum += 4*2 + 8*3 + 4*(x-4)*4;
    // vong thu 2
    sum += 4*4 + 4*(x-4)*6;
    //cac vong ben trong
    sum += (x-4)*(x-4)*8;
    ans -= sum;
    return ans/2;
}
 
int main(){
    long long n; cin >> n;
    for(long long i = 1; i<= n; i++){
        cout << ans(i) << endl;
    }
}
