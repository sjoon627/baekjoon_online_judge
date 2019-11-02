#include <stdio.h>

int main(){
	
	int num[3];
	int i,k;

	scanf("%d %d %d",&num[0],&num[1],&num[2]);
	
	for(i=0;i<2;i++){
		if(num[i]>num[i+1]){
			k=num[i];
			num[i]=num[i+1];
			num[i+1]=k;
		}
	}
	i=0;
			if(num[i]>num[i+1]){
			k=num[i];
			num[i]=num[i+1];
			num[i+1]=k;
		}
		
	printf("%d",num[1]);
	
}
