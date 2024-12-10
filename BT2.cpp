#include <stdio.h>

int main() {
    // Khai bao va khoi tao hai bien so nguyen
    int so_thu_nhat = 15; // Bien so thu nhat co gia tri 15
    int so_thu_hai = 25;  // Bien so thu hai co gia tri 25

    // Tinh tong cua hai bien va luu ket qua vao mot bien khac
    int tong = so_thu_nhat + so_thu_hai; // Bien tong luu gia tri cua phep cong

    // In ket qua
    printf("So thu nhat: %d\n", so_thu_nhat);
    printf("So thu hai: %d\n", so_thu_hai);
    printf("Tong: %d\n", tong);

    return 0;
}

