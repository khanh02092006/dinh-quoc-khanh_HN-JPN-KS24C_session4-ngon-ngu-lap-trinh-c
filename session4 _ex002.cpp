#include<stdio.h>
int main() {
    int number;

    
    printf("Vui l�ng nhap v�o mot so nguy�n: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d l� so chan.\n", number);
    } else {
        printf("%d l� so le.\n", number);
    }

    return 0;
}
