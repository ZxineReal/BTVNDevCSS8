#include<stdio.h>

int main(){
	int arr[6]={2,2,3,4,5,1};
	int count = 0;
	int a=0;
	int b;
	
	for(int i=0;i<6;i++){
		count=0;
		for(int j=0;j<6;j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
		if(count>a){
			a=count;
			b=arr[i];
		}
	}
	printf("Phan tu lap lai nhieu nhat la: %d",b);
}