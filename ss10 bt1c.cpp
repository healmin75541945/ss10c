#include <stdio.h>

int main() {
    // khoi tao mang gan gia tri
    int arr[] = {3, 5, 29,12, 26};
    int n = sizeof(arr) / sizeof(arr[0]); //tinh so phan tu trong mang
    int x, found = 0;

    // nhap gia tri can tim
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);

    // Tim kiem tuan tu
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Phan tu %d co trong mang tai vi tri %d\n", x, i);
            found = 1; // danh dau tim thay
            break; // ket thuc tim kiem neu da tim thay
        }
    }

    // Neu ko tim thay
    if (!found) {
        printf("Phan tu %d khong co trong mang\n", x);
    }

    return 0;
}

    	
  	
  	
  	
  	
  	
  	



