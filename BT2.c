#include<stdio.h>

int main(){
	int arr[3][3]={
	{2,3,7},
	{9,5,4},
	{10,12,15},
	};
	
	int num;
	int count = 0;
	printf("Moi ban nhap vao so can kiem tr (1-15):\n");
	scanf("%d",&num);
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(num==arr[i][j]){
				printf("Vi tri phan tu trong mang la: dong %d cot %d\n",i+1,j+1);
				count++;
			}
		}

}
 	if(count==0){
			printf("Khong ton tai trong mang\n");
	}
	return 0;
}