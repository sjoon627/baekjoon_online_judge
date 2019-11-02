#include <stdio.h>

int main(){
	int n,a,n1,i;
	
	scanf("%d %d",&n,&a);
	
	for(i=0;i<n;i++){
		scanf("%d",&n1);
		
		if(n1<a)
		printf("%d ",n1);
	}
	return 0;
}
