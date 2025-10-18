#include <stdio.h>
int main(){
    char arr[50];
    int digit[50];
    int sum = 0 , j = 0;

printf("Enter The Text : ");
scanf(" %[^\n]",arr);
int i;

for ( i = 0; arr[i]!='\0'; i++)
{ if (arr[i]>='0' && arr[i]<='9'){
    digit[j] = arr[i] - '0';
    sum += digit[j];
    j++;
}
}
 printf("Extracted Digits Are : \n");
for ( i = 0; i < j ; i++)
{ printf("%d\n",digit[i]);
}


printf("The Sum Of The Number Extracted Is : %d",sum);
return 0;
}
