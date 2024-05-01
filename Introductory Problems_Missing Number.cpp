#include <bits/stdc++.h>

using namespace std;

long long sum, N, arr[2000000] ;

int main() {
    cin >> N;
    for(int i = 0; i < N-1; i++){
        cin >> arr[i];
		sum += arr[i];
	}
    cout << N*(N+1)/2 - sum;
}
