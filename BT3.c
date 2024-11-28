#include<stdio.h>

int main(){
	int num;
	printf("Moi ban nhap vao kich thuoc cua mang:\t");
	scanf("%d",&num);
	
	int arr[num][num];
	
	for(int i=0;i<num;i++){
		for(int j=0; j<num;j++){
			printf("Moi ban nhap vao phan tu tai vi tri dong %d cot %d\n",i,j);
			scanf("%d",&arr[i][j]);
		}
		
	}
	for(int i=0;i<num;i++){
		for(int j=0;j<num;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}