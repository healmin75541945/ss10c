#include<stdio.h>

int main(){
	int arr[100];
	int a[100];
	int sizeA=0; 
	int size, number;
	printf("nhap vao so phan tu cua mang: ");
	scanf("%d", &size);
	for(int i = 0; i < size;i++){
		printf("nhap vao phan tu thu %d cua mang: ", i+1);
		scanf("%d", &arr[i]); 
	}
	
	int test = 0; 
	printf("\nnhap vao phan tu can tim: ");
	scanf("%d", &number); 
	for(int i = 0; i < size; i++){
		if(number == arr[i]){
			printf("vi tri cua phan tu %d la: %d\n", number, i+1);
			test = 1;
			sizeA++;
			a[sizeA - 1] = i + 1;
			 
		}
	}
	if(test == 0){
		printf("khong tim thay!"); 
	} 
	printf("\n"); 
	for(int i=0;i<sizeA;i++){
		printf("%d ", a[i]); 
	} 
	
	
	return 0; 
}
