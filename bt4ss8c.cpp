#include<stdio.h>

int main(){
	int arr[3][3]={1,2,3,4,5,6,7,8,9};
	int max = arr[0][0]; 
	
	for(int i =1;i < 3; i++){
		for(int j =1; j <3;j++){
			if(max < arr[i][j]){
				max = arr[i][j]; 
			} 
		}
	} 
	printf("phan tu lon nhat la: %d", max); 	
	return 0; 
} 

