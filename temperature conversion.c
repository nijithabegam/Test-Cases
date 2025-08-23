#include<stdio.h>
int main(){
float fahrenheit,celcius;
    //asking the input
printf("enter the temperature:");
scanf("%f",&fahrenheit);
//conversion formula
celcius = (fahrenheit - 32)*5.0/9.0;

printf("celcius  value is:%2f/n ",fahrenheit);

return 0;

}