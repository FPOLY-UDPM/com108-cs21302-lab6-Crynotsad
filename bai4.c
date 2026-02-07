/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 4: TÍNH BÌNH PHƯƠNG CÁC PHẦN TỬ TRONG MẢNG 2 CHIỀU 
//  Input: Nhập vào từ bàn phím 1 ma trận các số nguyên. Mảng gồm n hàng, m cột 
//  Output: Xuất ra màn hình ma trận bình phương 

// VIẾT CODE Ở ĐÂY

#include <stdio.h>

int main() {
    int n, m;
    int a[100][100];
    int i, j;

    printf("Nhập số hàng n: ");
    scanf("%d", &n);
    printf("Nhập số cột m: ");
    scanf("%d", &m);

    // nhập ma trận
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }

    // in ma trận bình phương
    printf("Ma trận bình phương:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%d ", a[i][j] * a[i][j]);
        }
        printf("\n");
    }

    return 0;
}