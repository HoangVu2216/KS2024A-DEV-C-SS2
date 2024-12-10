#include <stdio.h>

int main() {
    // Khai bao va khoi tao bien chieu dai va chieu rong cua hinh chu nhat
    int chieu_dai = 10; // Bien chieu dai co gia tri 10
    int chieu_rong = 5;  // Bien chieu rong co gia tri 5

    // Tinh chu vi va dien tich cua hinh chu nhat
    int chu_vi = 2 * (chieu_dai + chieu_rong); // Cong thuc tinh chu vi: 2 * (chieu dai + chieu rong)
    int dien_tich = chieu_dai * chieu_rong;   // Cong thuc tinh dien tich: chieu dai * chieu rong

    // In ket qua
    printf("Chieu dai hinh chu nhat: %d\n", chieu_dai);
    printf("Chieu rong hinh chu nhat: %d\n", chieu_rong);
    printf("Chu vi hinh chu nhat: %d\n", chu_vi);
    printf("Dien tich hinh chu nhat: %d\n", dien_tich);

    return 0;
}

