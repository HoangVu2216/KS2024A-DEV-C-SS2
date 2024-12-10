#include <stdio.h>

int main() {
    // Khai bao va khoi tao hai bien so nguyen
    int so_thu_nhat = 15; // Bien so thu nhat co gia tri 15
    int so_thu_hai = 25;  // Bien so thu hai co gia tri 25

    // Tinh tong, hieu, tich, va thuong
    int tong = so_thu_nhat + so_thu_hai;         // Bien tong luu gia tri cua phep cong
    int hieu = so_thu_nhat - so_thu_hai;         // Bien hieu luu gia tri cua phep tru
    int tich = so_thu_nhat * so_thu_hai;         // Bien tich luu gia tri cua phep nhan
    float thuong = (float)so_thu_nhat / so_thu_hai; // Bien thuong luu gia tri cua phep chia (ep kieu float)

    // In ket qua
    printf("So thu nhat: %d\n", so_thu_nhat);
    printf("So thu hai: %d\n", so_thu_hai);
    printf("Tong: %d\n", tong);
    printf("Hieu: %d\n", hieu);
    printf("Tich: %d\n", tich);
    printf("Thuong: %.2f\n", thuong); // Chi hien thi 2 chu so sau dau cham

    return 0;
}

