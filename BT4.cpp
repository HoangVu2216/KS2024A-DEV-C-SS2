#include <stdio.h>

int main() {
    // Khai bao va khoi tao bien canh cua hinh vuong
    int canh = 7; // Bien canh co gia tri 7

    // Tinh chu vi va dien tich cua hinh vuong
    int chu_vi = 4 * canh;         // Cong thuc tinh chu vi: 4 * canh
    int dien_tich = canh * canh;   // Cong thuc tinh dien tich: canh * canh

    // In ket qua
    printf("Canh cua hinh vuong: %d\n", canh);
    printf("Chu vi hinh vuong: %d\n", chu_vi);
    printf("Dien tich hinh vuong: %d\n", dien_tich);

    return 0;
}

