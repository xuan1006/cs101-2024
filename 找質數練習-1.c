#include <stdio.h>
#include <stdlib.h>

int main() {
	int i=2,k=2,num,totle=0,count=0;
	
	scanf("%d",&num);
	
	while(1){
		for(i=2;i<k;i++){
			if(k%i==0){
			count++;
			}
		}
		if(count==0){
			printf("%d\n",k);
			totle++;
		}
		count=0;
		k++;
		if(totle==num){
			break;
		}
	}
}
