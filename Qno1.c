#include<stdio.h>
int main(){
	int Id[12];
	int i;
	int num = 0 ;
	for(i=0;i<12;i++){
		printf("Enter employee id ");
		scanf("%d",&Id);
	}
	int input;
	printf("enter any input");
	scanf("%d",&input);
	for(i=0 ; i<12 ; i++){
	
	if(Id[i]==input){
		num = 1 ;
	}
	}
	if(!num==0){
	printf("%s","exists");
	}
	else{
		printf("not found");
	}
	
}
