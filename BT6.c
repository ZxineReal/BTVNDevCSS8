#include<stdio.h>

int main(){
	int arr[3][3]={
	{2,5,3},
	{4,2,6},
	{5,8,1},
	};
	int a,sum;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==0 && j==0 || i==1 && j==1 || i==2 && j==2){
				printf("%d thuoc duong cheo chinh cua ma tran\n",arr[i][j]);
				sum+= arr[i][j];
			}
		}
	}
	printf("Tong cac so thuoc duong cheo chinh cua ma tran la: %d\n",sum);
}