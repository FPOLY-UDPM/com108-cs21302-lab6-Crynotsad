/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng 


// VIẾT CODE Ở ĐÂY

#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int sum = 0, count = 0;
    float tb;

    printf("Nhập số phần tử n: ");
    scanf("%d", &n);

    // nhập mảng
    for(i = 0; i < n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // tính tổng các số chia hết cho 3
    for(i = 0; i < n; i++){
        if(arr[i] % 3 == 0){
            sum += arr[i];
            count++;
        }
    }

    // tính trung bình
    if(count > 0){
        tb = (float)sum / count;
        printf("Trung bình các số chia hết cho 3 là: %.2f", tb);
    }else{
        printf("Không có số nào chia hết cho 3");
    }

    return 0;
}