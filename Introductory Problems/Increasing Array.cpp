#include <bits/stdc++.h>

using namespace std;

long long N, arr[200000];

int main() {
    cin >> N;
    long long count = 0;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
        if(arr[i] < arr[i-1]){
            count += (arr[i-1] - arr[i]);
	    arr[i] = arr[i-1];
	}			
    }
    cout << count;
    return 0;
}
