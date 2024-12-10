#include <stdio.h>

int main() {
    // Khai bao hang so PI va bien ban kinh
    const float PI = 3.14; // Hang so PI co gia tri 3.14
    float ban_kinh = 5.0;  // Ban kinh hinh tron co gia tri 5.0

    // Tinh chu vi va dien tich hinh tron
    float chu_vi = 2 * PI * ban_kinh;       // Cong thuc tinh chu vi: 2 * PI * ban kinh
    float dien_tich = PI * ban_kinh * ban_kinh; // Cong thuc tinh dien tich: PI * ban kinh^2

    // In ket qua
    printf("Ban kinh hinh tron: %.2f\n", ban_kinh);
    printf("Chu vi hinh tron: %.2f\n", chu_vi);
    printf("Dien tich hinh tron: %.2f\n", dien_tich);

    return 0;
}

