// Online C compiler to run C program online
#include <stdio.h>

int use[50],so_ngo_cut, ngocut[5], DK[50], count;
char X[50], Y[50];
int k = 1;

char huong(int k){
    if(k == -7) return 'U';
    if(k == -1) return 'L';
    if(k == 1) return 'R';
    if(k == 7) return 'D';
}

void checkkq(){
    int check = 0;
    for(int i =1; i<=48; i++)
        if(DK[i] !=0 )
            if(X[i] != Y[i-1]) check++;
    if (check == 0) count++;
}

void Try(int i){
    // duyet cac kha nang co the di chuyen
    for(int j = -7; j <= 7; j++){
        if((j==-7 || (j==-1 && k%7!=1) || (j==1 && k%7!=0) || j==7) && (k+j >=1) && (k+j<=49) && (k+j!=ngocut[1]) && (k+j!=ngocut[2]) && (k+j!=ngocut[3]) && (k+j!=ngocut[4])){
            //xem lieu co the di chuyen den day khong
            if(use[k+j] == 0){
                //dat lai ngo cut
                if(so_ngo_cut != 0){
                    for(int m = 1; m <= so_ngo_cut; m++)
                        ngocut[m] = 0;
                    so_ngo_cut = 0;
                }
                X[i] = huong(j);
                k += j;
                use[k] = 1;
                if(i == 48)
                    if(k == 43) checkkq();
                else Try(i + 1);
                //backtrack
                use[k] = 0;
            }
        }
    }
    //roi vao ngo cut
    if(i < 48){
        so_ngo_cut++;
        ngocut[so_ngo_cut] = k;
        Try(i-1);
    }
}

int main() {
    scanf("%s", Y);
    for(int i = 0; i < 48; i++)
        if(Y[i] != 63) DK[i+1]++;
    Try(1);
    printf("%d", count);
}
