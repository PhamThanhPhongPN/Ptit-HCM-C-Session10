#include <stdio.h>

int main(){
	int n;
	printf("Hay nhap so phan tu cho mang : ");
	scanf("%d",&n);
	int array[n];
	for (int i = 0; i < n;i++){
		printf("Hay nhap phan tu cho array[%d] ",i);
		scanf("%d",&array[i]);
	} 
	int A = sizeof(array)/sizeof(array[0]);
	for (int i = 0; i < A-1; i++){
		for (int j = 0;j< A-i-1;j++){
			if (array[j]>array[j+1]){
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1]= temp; 
			} 
		} 
	} 
	printf("Mang sau khi sap xep la :\n") ;
	for (int i = 0;i < n;i++){
		printf("%d ",array[i]);
	}
	int guess,check=0;
	while (check == 0){
	printf("\nNhap mot phan tu de doan : ");
	scanf("%d",&guess);
		for (int i = 0;i<n;i++){
			if (guess == array[i]){
				printf("Co phan tu.\n");
				printf("Vi tri phan tu trong mang la array[%d]",i);
				check++;
				break;
			} else if (i == n-1){
				printf("Khong co phan tu nay trong mang.\n");
				printf("Try again!\n");
				break;	
			}
			}
		}
return 0;
}
