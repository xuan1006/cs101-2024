#include <stdio.h>

int AREA(int a,int b){
	return a*b;
}
int main(){
	int a=0,b=0,area=0;
	scanf("%d %d",&a,&b);
	
	area=AREA(a,b);
	printf("%d",area);
}
