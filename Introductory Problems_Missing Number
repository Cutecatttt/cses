//Missing Number
#include <stdio.h>

int main() {
    int N, arr[200000];
    scanf("%d", &N);
    for(int i = 0; i < N-1; i++)
        scanf("%d", &arr[i]);
    for(int i = 1; i < N; i++){
        int count = 0;
        for(int j = 0; j < N-1; j++){
            if(i==arr[j])
                count++;
        }
        if(count==0){
            printf("%d", i);
            break;
        }
    }
}
