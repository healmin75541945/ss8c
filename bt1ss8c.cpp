#include<stdio.h>

int main(){
	int arr[]={1,2,3,4,5,6};
	
	
	for(int i = sizeof arr/sizeof(int) - 1;i >= 0; i--){
		printf("%2d", arr[i]); 
	} 
	return 0; 
} 
