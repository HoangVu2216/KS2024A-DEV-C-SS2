#include <stdio.h>

int main() {
    // Khai bao va khoi tao cac bien voi cac kieu du lieu co ban trong C

    // Kieu so nguyen (integer): dung de luu cac so nguyen
    int tuoi = 25; // Bien tuoi co gia tri la 25

    // Kieu so thuc (floating-point): dung de luu cac so thuc (so thap phan)
    float diem_tb = 8.5; // Bien diem trung binh co gia tri la 8.5

    // Kieu so thuc chinh xac cao (double): giong float nhung co do chinh xac cao hon
    double pi = 3.14159265359; // Bien pi co gia tri gan dung cua so PI

    // Kieu ky tu (character): dung de luu mot ky tu duy nhat
    char ky_tu = 'A'; // Bien ky tu co gia tri la 'A'

    // Kieu logic (boolean): luu gia tri dung (true) hoac sai (false) (dung stdbool.h)
    #include <stdbool.h>
    bool la_sinh_vien = true; // Bien logic cho biet day la sinh vien

    // In ra cac gia tri da khai bao
    printf("Tuoi: %d\n", tuoi);
    printf("Diem trung binh: %.2f\n", diem_tb);
    printf("Pi: %.11f\n", pi);
    printf("Ky tu: %c\n", ky_tu);
    printf("La sinh vien: %s\n", la_sinh_vien ? "Dung" : "Sai");

    return 0;
}

