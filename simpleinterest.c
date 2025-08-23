#include<stdio.h>
int main(){
    float rate,time,principle,simpleinterest;
printf("enter the rate:");
scanf("%f",&rate);

printf("enter the time:");
scanf("%f",&time);

printf("enter the principle:");
scanf("%f",&principle);

simpleinterest=(time*rate*principle)/100;

printf("the simple interest is :%2f/n",simpleinterest);
return 0;
}