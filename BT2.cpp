#include <stdio.h>

int main(){
	int array[]={ 6, 13, 144, 9, 2};
	int n = sizeof(array)/sizeof(array[0]);
	for (int i = 0; i < n-1; i++){
		for (int j = 0;j< n-i-1;j++){
			if (array[j]>array[j+1]){
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1]= temp; 
			} 
		} 
	} 
	printf("Mang sau khi sap xep la :\n") ;
	for (int i = 0;i < 5;i++){
		printf("%d ",array[i]);
	}
	return 0;
}
