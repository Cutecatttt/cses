//Increasing Array
#include <stdio.h>
#include <string.h>

int main() {
    int N, arr[200000];
    scanf("%d", &N);
    int count = 0;
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
        if(arr[i] < arr[i-1])
            count += (arr[i-1] - arr[i]); 
    }
    printf("%d", count);
}
