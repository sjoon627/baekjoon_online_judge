#include <stdio.h>
#include <string.h>

int main(){
	
	char str[101]={0};
	int i,l;
	
	scanf("%s",str);
	l=strlen(str);
	
	for(i=1;i<=l;i++){
		
		printf("%c",str[i-1]);
		
		if(i%10==0)
		printf("\n");
	}

	return 0;
}
