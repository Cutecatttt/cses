//Repetitions
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    char str[1000000];
    int max = 1;
    int count = 1;
    scanf("%s", str);
    for(int i = 1; i < strlen(str); i++){
        if(str[i] == str[i-1]){
            count++;
            if (count > max) max = count;
        }
        else count = 1;
    }
    printf("%d", max);
}
