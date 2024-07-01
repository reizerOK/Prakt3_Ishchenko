#include <stdio.h>

int main() {
    int r;

    printf("Введіть число розрядів (р): ");
    scanf("%d", &r);

    long long dp5[r+1], dp9[r+1];

    dp5[1] = 1; 
    dp9[1] = 1; 

    for (int i = 2; i <= r; i++) {
        dp5[i] = dp9[i-1]; 
        dp9[i] = dp5[i-1] + dp9[i-1];
    }

    long long total = dp5[r] + dp9[r];

    printf("Кількість чисел з %d розрядами: %lld\n", r, total);
    
    return 0;
}
