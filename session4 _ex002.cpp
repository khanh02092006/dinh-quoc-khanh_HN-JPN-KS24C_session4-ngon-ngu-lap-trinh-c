#include<stdio.h>
int main() {
    int number;

    
    printf("Vui lòng nhap vào mot so nguyên: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d là so chan.\n", number);
    } else {
        printf("%d là so le.\n", number);
    }

    return 0;
}
