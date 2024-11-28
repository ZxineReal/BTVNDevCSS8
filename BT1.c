#include<stdio.h>

int main(){
	int arr[2][2]={{1,2},{3,4}};
	
	for(int i=1;i>=0;i--){
		for(int j=1;j>=0;j--){
			printf("array[%d][%d]: %d\t",i-1,j-1,arr[i][j]);
		}
	}
	return 0;
}