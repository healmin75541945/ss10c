#include <stdio.h>

int main() {
    // Khoi tao va gan gia tri cho mang
    int arr[] = {3, 5, 29, 12, 26};
    int n = sizeof(arr) / sizeof(arr[0]); // Tinh so phan tu trong mang

    // Thuat toan bb s
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Hoan doi neu phan tu hien tai lon hon phan tu ke tiep
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // In mang sau khi sap xep
    printf("Mang sau khi sap xep tang dan: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

