#include<stdio.h>

int main(){
	int arr[3][3]={
	{9,5,5},
	{4,3,6},
	{7,8,6},
	};
	int a,sum;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==0 && j==2 || i==1 && j==1 || i==2 && j==0){
				printf("%d thuoc duong cheo phu cua ma tran\n",arr[i][j]);
				sum+= arr[i][j];
			}
		}
	}
	printf("Tong cac so thuoc duong cheo phu cua ma tran la: %d\n",sum);
}