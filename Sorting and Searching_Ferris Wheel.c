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
            if(i >= (n-i-z-1)) break;
        }
        else{
            count++;
            z++;
            if(i >= (n-i-z-1)) break;
        }
    }
    if((i == n-i-z-1) && (X[i]<=x)) count++;
    return count;
}

// Hàm hoán đổi giá trị của hai phần tử
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm chia mảng và trả về chỉ mục của phần tử chia đúng
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Chọn phần tử pivot là phần tử cuối cùng
    int i = (low - 1); // Chỉ mục của phần tử nhỏ hơn pivot

    for (int j = low; j < high; j++) {
        // Nếu phần tử hiện tại nhỏ hơn hoặc bằng pivot
        if (arr[j] <= pivot) {
            i++; // Tăng chỉ số của phần tử nhỏ hơn pivot
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Hàm sắp xếp mảng sử dụng thuật toán quick sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        /* pi là chỉ số của phần tử đã được sắp xếp đúng là
        tại vị trí đúng của nó trong mảng */
        int pi = partition(arr, low, high);

        // Sắp xếp đệ quy các phần tử trước và sau phân chia
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    scanf("%d%d", &n, &x);
    for(int i = 0; i < n; i++){
        scanf("%d", &X[i]);
    }
    quickSort(X, 0, n - 1);
    printf("%d", KQ(X,n,x));
    
}
