//Coin Piles
#include <stdio.h>
#include <math.h>
int main() {
    int t;
    float a[10000], b[10000];
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
        scanf("%f%f", &a[i], &b[i]);
    for(int i = 0; i < t; i++){
        if(a[i] >= b[i]/2 && a[i] <= b[i]*2 && (int)(a[i]+b[i])%3 == 0)
            printf("YES\n");
        else printf("NO\n");
    }
}
