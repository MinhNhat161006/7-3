#include <stdio.h>

int main() {
    int arr[5] = {1, 3, 5, 7, 9}, hasEven = 0;

    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            hasEven = 1;
        }
    }

    if (!hasEven) printf("Mảng không chứa số chẵn.");

    return 0;
}
