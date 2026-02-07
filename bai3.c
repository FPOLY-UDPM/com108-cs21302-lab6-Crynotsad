/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 3: SẮP XẾP MẢNG THEO THỨ TỪ GIẢM DẦN 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả mảng đã sắp xếp 

// VIẾT CODE Ở ĐÂY

#include <stdio.h>

int main() {
    int n, i, j;
    int arr[100];
    int temp;

    printf("Nhập n: ");
    scanf("%d", &n);

    // nhập mảng
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // sắp xếp giảm dần (đổi chỗ đơn giản)
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // in mảng sau khi sắp xếp
    printf("Mảng sau khi sắp xếp giảm dần:\n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}