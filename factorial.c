#include<stdio.h>

int main(){
int i,n;
long long fact = 1;

printf("enter the numbers:");
scanf("%d",&n);

if(n < 0){
    printf("negative nummbers are not defined in factorial");
} else {
    
      for(i=1;i<=n;i++){
      fact = fact*i;
     printf("the factorial of %d=%lld\n",n,fact);
      }  
}
return 0;
}
