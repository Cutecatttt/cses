#include <stdio.h>
#define N 200000

int n,x;
int X[N];

int KQ(int X[], int n, int x){
    int count = 0;
    int z = 0;
    int i = 0;
    while(1){
        if(X[i] + X[n-i-z-1] <= x){
            count ++;
            i++;
            if(i >= n-i-z-1) break;
        }
        else{
            count++;
            z++;
        }
    }
    if((i == n-i-z-1) && (X[i]<=x)) count++;
    return count;
}

void sort(int a[], int n){
    int temp = 0;
    for(int i = 0; i < n-1; i++)
        for(int j = i; j < n; j++)
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}

int main() {
    scanf("%d%d", &n, &x);
    for(int i = 0; i < n; i++){
        scanf("%d", &X[i]);
    }
    sort(X,n);
    printf("%d", KQ(X,n,x));
    
}
