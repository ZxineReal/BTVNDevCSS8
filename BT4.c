#include<stdio.h>

int main(){
	int arr[2][3]={{1,5,2},{9,4,3}};
	int max=0;
	
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			if(arr[i][j]>max){
				max=arr[i][j];
			}
		}
	}
	printf("So lon nhat trong mang la: %d",max);
	
	return 0;
}