#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    int is_prime = 1;
    if (n < 2) {
        is_prime = 0;
    } else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }
    if (is_prime) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}
