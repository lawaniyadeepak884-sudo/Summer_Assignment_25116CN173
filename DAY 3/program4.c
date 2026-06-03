#include<stdio.h>   
int main(){
int a,b,i,lcd;
printf("Enter two numbers: ");
scanf("%d %d",&a,&b);
        for ( i=1;a % i == 0 && b % i == 0;i++ ){
lcd = i;
        }
printf("LCD = %d", (a * b) / lcd);
return 0;







}