#include <stdio.h>

int main(){
	int array[]={ 12, 13, 4, 9, 2};
	int n = sizeof(array)/sizeof(array[0]);
	for (int i =1; i < n;i++){
		int key = array[i];
		int j = i -1;
		while (j >= 0 && array[j] > key){
			array[j+1] = array[j];
			j = j - 1; 
		} 
		array[j+1] = key; 
	}
	printf("Mang sau khi sap xep la :\n") ;
	for (int i = 0;i < 5;i++){
		printf("%d ",array[i]);
	}
	return 0;
}
