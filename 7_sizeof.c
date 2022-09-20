#include<stdio.h>
//refer https://www.educative.io/answers/what-is-the-sizeof-function-in-c
int main(){
int i;
float f;
double d;
char c;
/*size of function returns the amount of memory allocated to a data
 type in bytes wich is fixed for such datatypes(primitive data type)S*/
printf("the size of int is%d",sizeof(i));
printf("the size of float is %d",sizeof(f));
printf("the size of double is %d",sizeof(d));
printf("the size of char is %d",sizeof(c));
    return 0;
}
