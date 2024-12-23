#include <stdio.h>

int main(){
	int array[]={ 5, 12, 44, 98, 4};
	int n = sizeof(array)/sizeof(array[0]);
	for (int i = 0;i<n-1;i++){
		int min = i;
		for (int j = i + 1;j < n;j++){
			if (array[j] < array[min]){
				min = j;
			}
		}
			int temp = array[min];
			array[min]=array[i];
			array[i]=temp;
	}
	printf("Mang sau khi sap xep la :\n") ;
	for (int i = 0;i < 5;i++){
		printf("%d ",array[i]);
	}
	return 0;
}
