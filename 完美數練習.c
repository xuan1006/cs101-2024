#include <stdio.h>
#include <stdlib.h>

int main(){
	int n=0,count=0,i=0;
	int num=1,sum=0;
	
	printf("��J:");
	scanf("%d",&n);

		for(i=1;i<n;i++){
			if(n%i==0){
				sum+=i;
			}
		}
		if(num==sum){
			printf("������");
		}
		else{
			printf("���O������");
		}

	return 0;
}
