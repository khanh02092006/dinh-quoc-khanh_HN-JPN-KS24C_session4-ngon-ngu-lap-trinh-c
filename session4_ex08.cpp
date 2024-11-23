#include <stdio.h>

int main() {
    float a, b, c;
    printf("Nhap canh a: ");
    scanf("%f", &a);
    printf("Nhap canh b: ");
    scanf("%f", &b);
    printf("Nhap canh c: ");
    scanf("%f", &c);
    if (a + b > c && a + c > b && b + c > a) {
        printf("Là 3 canh tam giác.\n");
    } else {
        printf("Không phai 3 canh tam giác.\n");
    }

    return 0;
}
