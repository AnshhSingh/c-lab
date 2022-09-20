#include<stdio.h>

int main(){
int num,i;
printf("enter the number ");
scanf("%d",&num);
//int i will go from 1 to 10
for(i=1;i<=10;i++){
    printf("%dX%d=%d\n",num,i,num*i);//'num' will multiply with 'i' everytime and print it hence a table from 1 to 10
}
    return 0;
}
