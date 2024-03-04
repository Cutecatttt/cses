//Increasing Array
#include <iostream>
long long N, arr[200000];
using namespace std;

int main() {
    scanf("%d", &N);
    long long count = 0;
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
        if(arr[i] < arr[i-1]){
            count += (arr[i-1] - arr[i]);
			arr[i] = arr[i-1];
		}			
    }
    printf("%lld", count);
}
