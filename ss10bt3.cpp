#include <stdio.h>

int main() {
    // Khoi tao va gan gia tri cho mang
    int arr[] = {29, 12, 3, 5, 26};
    int n = sizeof(arr) / sizeof(arr[0]); // Tinh so phan tu trong mang

    // Thuat toan Insertion Sort
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Di chuyen cac phan tu lon hon key ve sau mot vi tri
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    // In mang sau khi sap xep
    printf("Mang sau khi sap xep tang dan: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

