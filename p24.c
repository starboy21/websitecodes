#include<stdio.h>

void main(){
int n;
printf("enter the rows\n");
scanf("%d",&n);
int i,j,k;
for(i=70;i>=65;i--){
for(k=70;k>=i;k--)
printf(" ");

for(j=65;j<=i;j++)
printf("%c",j);
printf("\n");
}
}

