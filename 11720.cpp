#include <stdio.h>
int main(){
	
	char str[101]={0};
	int n,i,sum=0;
	
	scanf("%d",&n);
	scanf("%s",str);
	
	for(i=0;i<n;i++){
		sum+=str[i]-'0';
	}
	
	printf("%d",sum);
	return 0;
}
