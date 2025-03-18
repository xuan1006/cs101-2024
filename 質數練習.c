#include <stdio.h>
#include <math.h>

int main(){
	int n=0,i=2,cont=0;
	
	printf("輸入:");
	scanf("%d",&n); 
	for(i=2;i<n;i++){
		if(n%i ==0){
			cont++;
			break;
		}
	}
	if(cont==0){
		printf("質數");
	}
	else{
		printf("不是質數");
	}
	
	
}
