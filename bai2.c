/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 2: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình giá trị nhỏ nhất và lớn nhất của mảng

// VIẾT CODE Ở ĐÂY

#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int max, min;

    printf("Nhap n: ");
    scanf("%d", &n);

    // nhập mảng
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // giả sử phần tử đầu là max và min
    max = arr[0];
    min = arr[0];

    // tìm max và min
    for(i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }

    printf("Max = %d\n", max);
    printf("Min = %d\n", min);

    return 0;
}
