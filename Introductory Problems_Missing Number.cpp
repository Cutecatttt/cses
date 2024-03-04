//Missing Number
#include <iostream>
using namespace std;
long long sum, N, arr[2000000] ;

int main() {
    scanf("%lld", &N);
    for(int i = 0; i < N-1; i++){
        scanf("%lld", &arr[i]);
		sum += arr[i];
	}
    printf("%lld", N*(N+1)/2 - sum);
}
