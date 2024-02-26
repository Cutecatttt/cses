//Two Knights
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for(int k = 1; k <= N; k++){
        int result = 0;
        for(int i = 0; i < k; i++){
            for( int j = 0; j < k; j++){
                int count = 1;
                if(i+1>=0 && j+2>=0 && i+1<k && j+2<k) count ++;
                if(i+1>=0 && j-2>=0 && i+1<k && j-2<k) count ++;
                if(i-1>=0 && j+2>=0 && i-1<k && j+2<k) count ++;
                if(i-1>=0 && j-2>=0 && i-1<k && j-2<k) count ++;
                if(i+2>=0 && j+1>=0 && i+2<k && j+1<k) count ++;
                if(i+2>=0 && j-1>=0 && i+2<k && j-1<k) count ++;
                if(i-2>=0 && j+1>=0 && i-2<k && j+1<k) count ++;
                if(i-2>=0 && j-1>=0 && i-2<k && j-1<k) count ++;
                result += (k*k - count);
            }
        }
        printf("%d\n", result/2);
    }
}
