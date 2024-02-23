//Palindrome Reorder
#include <stdio.h>
#include <string.h>
int main() {
    int arr[26]={};
    char str[1000000];
    scanf("%s", &str);
    for(int i = 0; i < strlen(str) ; i++){
        arr[str[i]-65]++;
    }
    int count = 0;
    for(int i = 0; i < 26 ; i++)
        if(arr[i]%2 != 0)
            count++;
    if(count > 1) printf("NO SOLUTION");
    else{
        for(int i = 0; i < 26 ; i++)
            if(arr[i]%2 == 0)
                for(int j = 1; j <= arr[i]/2 ; j++)
                    printf("%c", i+65);
        for(int i = 0; i < 26 ; i++)
            if(arr[i]%2 != 0)
                for(int j = 1; j <= arr[i] ; j++)
                    printf("%c", i+65);
        for(int i = 25; i >= 0 ; i--)
            if(arr[i]%2 == 0)
                for(int j = 1; j <= arr[i]/2 ; j++)
                    printf("%c", i+65);
    }
    return 0;
}
