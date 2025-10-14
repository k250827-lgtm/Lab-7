#include <stdio.h>
int main(){
	int age[8];
	int i,min;
	min=age[0];
	for(i=0;i<8;i++){
		printf("enter age ");
		scanf("%d",&age[i]);
	
	}
	 for (i=0;i,8;i++){
	 if	( age[i]<min ) {
	 	min=age[i];
	 
	 }
	}
	printf("%d is youngest", min);
}
