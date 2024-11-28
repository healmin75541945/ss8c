#include<stdio.h>

int main(){
	int arr[3][3]={1,2,3,4,5,6,7,8,9};
	int sum = 0; 
	int row_size = sizeof(arr) / sizeof(arr[0]);
    int column_size = sizeof(arr[0]) / sizeof(arr[0][0]);
	for(int i =0;i < 3; i++){
		for(int j =0; j <3;j++){
			if(i == 0||j == 0||i == row_size - 1||j == column_size - 1){
				sum += arr[i][j]; 
			} 
		}
	} 
	printf("tong phan tu o bien cua mang la: %d", sum); 	
	return 0; 
} 	
