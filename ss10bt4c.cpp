#include <stdio.h>

int main() {
    // Khoi tao va gan gia tri cho mang
    int arr[] = {29, 12, 3, 5, 26};
    int n = sizeof(arr) / sizeof(arr[0]); // Tinh so phan tu trong mang

    // Thuat toan Selection Sort
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i; // Gia dinh phan tu nho nhat la arr[i]
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j; // Cap nhat chi so cua phan tu nho nhat
            }
        }
        // Hoan doi phan tu nho nhat voi phan tu dau tien
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }

    // In mang sau khi sap xep
    printf("Mang sau khi sap xep tang dan: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

