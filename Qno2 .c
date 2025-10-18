#include <stdio.h>
int main(){
	int marks[10];
	int i,average,sum=0;
	for (i=0;i<10;i++){
		printf("enter marks : ");
		scanf("%d",&marks[i]);
	
	sum+=marks[i];
}
	average=sum/10;
	printf("Average of marks : %d", average);
	return 0;
}

