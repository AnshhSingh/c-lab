#include<stdio.h>
//refer https://www.cuemath.com/numbers/number-line/
int main(){
    printf("enter a number to check ");
    int num;
    scanf("%d",&num);
if (num>0){
    printf("it is a positive number");
}
else if(num==0){
    printf("this number is equal to zero");
}
else{
    printf("it is a negative number");
}



    return 0;
}
