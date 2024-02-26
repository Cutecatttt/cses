//Distinct Numbers
#include <stdio.h>

int main() {
    int n, arr[200000];
    int number = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        int count = 0;
        for(int j = 0; j < i; j++)
            if(arr[i]==arr[j])
                count++;
        if(count==0) number++;
            
    }
    printf("%d", number);
}
