#include <stdio.h>
#include <math.h>

int main(){
	int n=0,i=2,cont=0;
	
	printf("��J:");
	scanf("%d",&n); 
	for(i=2;i<n;i++){
		if(n%i ==0){
			cont++;
			break;
		}
	}
	if(cont==0){
		printf("���");
	}
	else{
		printf("���O���");
	}
	
	
}
